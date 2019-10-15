/*
 * part01-intro.pdf p.41
 */

#include <stdio.h>

void main(void) {
	int x = 95;
	
	printf("%d\n", x);    /* 95  */
	printf("%x\n", x);    /* 5f  */
	printf("%o\n", x);    /* 137 */
	printf("%c\n", x);    /* _ */
	
	x = 95;
	x = 0x5F;
	x = 0137;
	
	x = 'd';
	printf("%d\n", x);    /* 100 */
	printf("%x\n", x);    /* 64  */
	printf("%o\n", x);    /* 144 */
	printf("%c\n", x);    /* d */
}
