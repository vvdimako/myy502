/*
 * part02-arrays-funcs.pdf p.15
 */

#include <stdio.h>

int main(void) {
	int x, y, k, n, res;
	int power(int base, int n);    /* πρωτότυπο */
	
	x = 2; y = 3; k = 4; n = 2;
	res = power(x, k);    /* κλήση */
	printf("%d raised to %d = %d\n", x, k, res);
	res = power(y, n);    /* κλήση */
	printf("%d raised to %d = %d\n", y, n, res);
	
	return 0;    /* Η main επιστρέφει 0 αν όλα ΟΚ */
}

/* Ορισμός
 * Yπολογίζει το base υψωμένο στη δύναμη n (base^n)
 */
int power(int base, int n) {
	int i, p;
	for (i = p = 1; i <= n; i++)
		p = p * base;
	return p;    /* τιμή επιστροφής */
}