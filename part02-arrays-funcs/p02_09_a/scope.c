/*
 * part02-arrays-funcs.pdf p.35
 */

#include <stdio.h>

#define SCALE 2

int number;
/* Function prototype */
int f(int param);

int main(void) {
	int y;
	number = 5;
	y = f(4*SCALE);
	printf("%d, %d\n", number, y);
	return 0;
}

int f(int x) {
	int y;
	y = x*SCALE + number;
	return y;
}
