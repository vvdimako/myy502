/*
 * part02-arrays-funcs.pdf p.24
 */

#include <stdio.h>

/* Function prototype */
void f(int a[]);

int main(void) {
	int i;
	int x[] = {1, 2};
	f(x);
	for (i = 0; i < 2; i++)
		printf("%d\n", x[i]);	
	return 0;
}

void f(int k[]) {
	int i;
	for (i = 0; i < 2; i++)
		k[i] = k[i] * 2;
}
