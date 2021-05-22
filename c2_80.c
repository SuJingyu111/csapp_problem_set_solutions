#include <stdio.h>
#include <stdlib.h>

int threeFourth(int x);

int main(int argc, char * argv[]) {
    printf("%d\n", threeFourth(atoi(argv[1])));
}

int threeFourth(int x) {
    int later = x & 0x3; //to make sure last bits are not neglected when /4, calculate seperately
	int former = x & ~0x3;
	int w = sizeof(int) << 3;
	int bias = (x >> (w - 1)) & ((1 << 2) - 1);//bias up/down according to negativity
	former >>= 2;
	former = (former << 1) + former;//first 30 bits/4 * 3
	later = (later << 1) + later;
	later = (later + bias) >> 2;//last 2 bits *3/4
	return later + former;
}