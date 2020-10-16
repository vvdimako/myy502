/*
 * part02-arrays-funcs.pdf p.39
 */

#include <stdio.h>
#include "myscope.h"

int number;

int main(void) {
	int y;
	number = 5;
	y = f(4*SCALE);
	printf("%d, %d\n", number, y);
	return 0;
}