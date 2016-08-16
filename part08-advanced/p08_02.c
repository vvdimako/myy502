/*
 * part08-advanced.pdf p.4,5
 */

#include <stdio.h>

int main(void) {
	unsigned int x;
	int k = 4;
	
	x = (1 << k);		/* 0...0010000 */
	printf("Line 1 - Value of x is %u\n", x);
	x = ~(1 << k);		/* 1...1101111 */
	printf("Line 2 - Value of x is %u\n", x);
	x = (1 << k) - 1;	/* 0...0001111 */
	printf("Line 3 - Value of x is %u\n", x);
	x = 0;
	x = x | 1;	/* Κάνε το LSB ίσο με 1 */
	printf("Line 4 - Value of x is %u\n", x);
	x = x & (~1);	/* Κάνε το LSB ίσο με 0 */
	x = (1 << 3) + 1;
	printf("%u: %s number\n", x, (x & 1) ? "Odd" : "Even");


	return 0;
}