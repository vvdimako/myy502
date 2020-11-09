/*
 * part05-dmm.pdf p.34
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *p, *q;
	
	p = (int *) malloc(10 * sizeof(int));
	q = (int *) realloc(p, 20 * sizeof(int));
	
	printf("%p, %p\n", p, q);   /* Μπορεί να διαφέρουν */
	
	return 0;
}