#include <stdio.h>
#include <stdlib.h>

void combineBytes(int x, int y);

int main() {
    int x = 12345;
    int y = 67890;
    combineBytes(x, y);
}

void combineBytes(int x, int y) {
    char *xBytes = (char *) &x;
    char *yBytes = (char *) &y;
    size_t intSize = sizeof(x);
    printf("The bytes of x are:\n");
    for (size_t i = 0; i < intSize; i++) {
        printf(" %.2x", xBytes[i]);
    }
    printf("\n");
    printf("The bytes of y are:\n");
    for (size_t i = 0; i < intSize; i++) {
        printf(" %.2x", yBytes[i]);
    }
    printf("\n");
    char *genWord = malloc(intSize);
    genWord[0] = xBytes[0];
    for (ssize_t i = 1; i < intSize; i++) {
        genWord[i] = yBytes[i];
    }
    printf("The bytes of generated word are:\n");
    for (size_t i = 0; i < intSize; i++) {
        printf(" %.2x", genWord[i]);
    }
    free(genWord);
}