#include <stdio.h>
int is_little_endian();

int main(){
    int endianIndicator = is_little_endian();
    if (endianIndicator == 1) {
        printf("Is little endian");
    }
    else {
        printf("Not little endian");
    }
}

int is_little_endian() {
    int testInt = 1;
    char *testPointer = (char *) &testInt;
    if ((short)*testPointer == 1) {
        return 1;
    }
    else {
        return 0;
    }
}