/*
 * part03-pointers.pdf p.33
 */

#include <stdio.h>

int main(void) {
	char x, s[5], *p = NULL;
	int y, a[10], *q = NULL;
	
	p = &x;
	q = a;
	printf("char: %lu,  int: %lu\n", sizeof(char), sizeof(int));
	printf("   x: %lu,    y: %lu\n", sizeof(x), sizeof(y));
	printf("   s: %lu,    a: %lu\n", sizeof(s), sizeof(a));
	printf("   p: %lu,    q: %lu\n", sizeof(p), sizeof(q));
	printf("  *p: %lu,   *q: %lu\n", sizeof(*p), sizeof(*q));
	
	return 0;
}