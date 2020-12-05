/*
 * part08-advanced.pdf p.30
 */

/* To see the preprocessed file (.i): gcc --save-temps p08_10.c */

#include <stdio.h>

#define max(a,b)  ( ((a) > (b)) ? (a) : (b) )

/* Function prototype */
int min(int a, int b);

int main(void) {
	int x = 4, y = 5;

	printf("max = %d\n", max(x,y));
	printf("min = %d\n", min(x,y));
	return 0;
}

int min(int a, int b) {
	return ((a < b) ? a : b);
}