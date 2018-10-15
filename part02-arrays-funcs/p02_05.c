/*
 * part02-arrays-funcs.pdf p.23
 */

#include <stdio.h>

/* Function prototypes */
void swap_wrong(int x, int y);
void swap_correct(int *x, int *y);

int main(void) {
	int a, b;
	a = 6;
	b = 7;
	
	printf("/* Before */\n");
	printf("a = %d, b = %d\n", a, b);
	swap_wrong(a, b);
	printf("\n/* after swap_wrong() */\n");
	printf("a = %d, b = %d\n", a, b);
	swap_correct(&a, &b);
	printf("\n/* after swap_correct() */\n");
	printf("a = %d, b = %d\n", a, b);
	
	return 0;
}

void swap_wrong(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap_correct(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
