/*
 * part02-arrays-funcs.pdf p.23
 */

#include <stdio.h>

/* Function prototypes */
void swap0(int x, int y);
void swap1(int *x, int *y);

int main(void) {
	int a, b;
	a = 6;
	b = 7;
	
	printf("/* Before */\n");
	printf("a = %d, b = %d\n", a, b);
	swap0(a, b);
	printf("\n/* after swap0() */\n");
	printf("a = %d, b = %d\n", a, b);
	swap1(&a, &b);
	printf("\n/* after swap1() */\n");
	printf("a = %d, b = %d\n", a, b);
	
	return 0;
}

void swap0(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap1(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
