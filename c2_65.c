#include <stdio.h>
#include <stdlib.h>

int odd_ones(int x);

int main(int argc,char *argv[]) {
    int res = odd_ones(atoi(argv[1]));
    if (res == 1) {
        printf("Has odd ones.\n");
    }
    else {
        printf("Has even ones.\n");
    }
}

int odd_ones(int x) {
    x^=x>>16;
    x^=x>>8;
    x^=x>>4;
    x^=x>>2;
    x^=x>>1;
    return !(x==1);
}