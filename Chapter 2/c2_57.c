#include <stdio.h>

typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len);
void show_int(int x);
void show_float(float x);
void show_pointer(void *x);

int main(){
    int x = 1;
    float xf = 1.0;
    double xd = 1.00;
    double *xdp = &xd;
    show_int(x);
    show_float(xf);
    show_pointer(xdp);
}

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    byte_pointer bp = (byte_pointer) &x;
    show_bytes(bp, sizeof(float));
}

void show_pointer(void *x) {
    byte_pointer bp = (byte_pointer) &x;
    show_bytes(bp, sizeof(void *));
}
