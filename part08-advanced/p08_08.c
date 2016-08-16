/*
 * part08-advanced.pdf p.27,28
 */

#include <stdio.h>

#define inch2cm(i) i*2.54
#define Square(x) x*x

/* gcc --save-temps p08_08.c */
int main(void) {
	int a, b;
	float l;

	a = Square(4);
	printf("a: %d\n", a);
	b = Square(a);
	printf("b: %d\n", b);
	l = inch2cm(2.0);
	printf("l: %.2f\n", l);

	a = Square(2+2);   /* ΛΑΘΟΣ αποτέλεσμα */
	printf("a: %d\n", a);

	return 0;
}