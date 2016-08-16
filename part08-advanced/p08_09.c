/*
 * part08-advanced.pdf p.29
 */

#include <stdio.h>

#define Square(x) (x)*(x)
#define Double(x) (x)+(x)

/* gcc --save-temps p08_09.c */
int main(void) {
	int a, b;

	a = Square(2+2);
	b = Square(-1);
	printf("a: %d\nb: %d\n", a, b);

	a = Double(a+b);
	b = 5 * Double(a);   /* ΛΑΘΟΣ αποτέλεσμα */
	printf("a: %d\nb: %d\n", a, b);

	return 0;
}
