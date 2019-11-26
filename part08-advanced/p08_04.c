/*
 * part08-advanced.pdf p.16
 */

#include <stdio.h>
#include <stdarg.h>

/* Function prototype */
int sum(int n, ...);

int main(void) {
	int res;

	res = sum(2, 5, 10);
	printf("res = %d\n", res);
	res = sum(4, 5, 10, 15, 20);
	printf("res = %d\n", res);

	return 0;
}

int sum(int n, ...) {   /* n is obligatory */
	va_list args;
	int i, sum = 0, t;

	va_start(args, n);    /* initialization for non-obligatory args */
	for (i = 0; i < n; i++) {
		t = va_arg(args, int);
		sum += t;
	}
	va_end(args);         /* finalization for non-obligatory args */

	return sum;
}
