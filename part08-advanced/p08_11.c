/*
 * part08-advanced.pdf p.31
 */

#include <stdio.h>

#define PI 3.14

int main(void) {
	double x, y;

	x = PI;
#undef PI
	y = PI;
	printf("x: %f\ny: %f\n", x, y);

	return 0;
}