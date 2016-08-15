/*
 * part03-pointers.pdf p.29-30
 */

#include <stdio.h>

int main(void) {
	int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p, *q;
	int n = 3;
	
	p = &src[0];
	q = &src[2];
	printf("%d %d\n", *p, p[0]);
	printf("%d %d\n", *q, q[0]);
	
	*(p+n) += 11;
	printf("%d\n", p[n]);
	
	*(q+n) += 11;
	printf("%d\n", q[n]);
	
	if (q > p)
		printf("%ld\n", q - p);
	else
		printf("%ld\n", p - q);
	
	p++;
	q += 2;
	
	printf("%d %d\n", *p, p[0]);
	printf("%d %d\n", *q, q[0]);
	
	return 0;
}