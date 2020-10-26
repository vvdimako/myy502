/*
 * part03-pointers.pdf p.21
 */

#include <stdio.h>

/* Function prototypes */
int max0(int x, int y);
void max1(int x, int y, int *res);

int main(void) {
	int a, b, res;
	a = 5;
	b = 3;
	
	res = max0(a,b);
	printf("max0: res = %d\n", res);
	max1(a, b, &res);
	printf("max1: res = %d\n", res);
	
	return 0;
}

int max0(int x, int y) {
	int res;
	if (x > y)
		res = x;
	else
		res = y;
	return res;
}

void max1(int x, int y, int *res) {
	if (x > y)
		*res = x;
	else
		*res = y;
}
