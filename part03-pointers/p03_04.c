/*
 * part03-pointers.pdf p.21
 */

#include <stdio.h>

/* Function prototypes */
void init(int *x, int *y);
void initarr(int x[], int n);

int main(void) {
	int a, b, array[10], n = 10, i;
	
	init(&a, &b);
	initarr(array, n);
	
	printf("a = %d\nb = %d\n", a, b);
	printf("array = { ");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("}\n");
	
	return 0;
}

void init(int *x, int *y) {
	*x = 12;
	*y = 15;
}

void initarr(int x[], int n) {
	int i;
	for (i = 0; i < n; i++)
		x[i] = i;
}
