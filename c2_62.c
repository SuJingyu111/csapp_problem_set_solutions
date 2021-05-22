#include <stdio.h>
#include <stdlib.h>

int int_shifts_are_arithmetic();

int main() {
    int isArithmetic = int_shifts_are_arithmetic();
    if (isArithmetic == 1) {
        printf("Is arithmetic.\n");
    }
    else {
        printf("Is not arithmetic.\n");
    }
}

int int_shifts_are_arithmetic() {
    int x = ~0;
    x >> 1;
    if (~x) {
        return 0;
    }
    return 1;
}