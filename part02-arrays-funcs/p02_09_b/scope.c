/*
 * part02-arrays-funcs.pdf p.36
 */

#include <stdio.h>

#define SCALE 2

int number;   /* Δήλωση/ορισμός μεταβλητής */
int f(int param);    /* Function prototype */

int main(void) {
	int y;
	number = 5;
	y = f(4*SCALE);
	printf("%d, %d\n", number, y);
	return 0;
}
