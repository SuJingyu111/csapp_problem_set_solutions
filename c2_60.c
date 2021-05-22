#include <stdio.h>
#include <stdlib.h>

unsigned replace_byte(unsigned x, int i, unsigned char b);

int main() {
    replace_byte(12345, 2, 'a');
}

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    printf("Initial value: %d\n", x);
    char * xBytePointer = (char *) &x;
    size_t intLen = sizeof(int);
    printf("Before replacing: \n");
    for (int i = 0; i < intLen; i++) {
        printf("%.2x", xBytePointer[i]);
    }
    printf("\n");
    xBytePointer[i] = b;
    printf("After replacing: \n");
    for (int i = 0; i < intLen; i++) {
        printf("%.2x", xBytePointer[i]);
    }
    printf("\n");
    printf("Current value: %d", x);
}