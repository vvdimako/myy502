/*
 * part08-advanced.pdf p.21
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 11
int cmpi(const void *x, const void *y);

int main(void) {
	int int_arr[LEN] = {-4, 128, -16, 256, 64, -32, -8, 32, 16, 0, -2};
	int i;

	qsort(int_arr, LEN, sizeof(int), cmpi);

	for (i = 0; i < LEN; i++)
		printf("%d ", int_arr[i]);
	printf("\n");

	return 0;
}

int cmpi(const void *x, const void *y) {
	int i0 = *((int *) x),
	    i1 = *((int *) y);
	return (i0 - i1);
}
