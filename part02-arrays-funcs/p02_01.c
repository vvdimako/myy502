/*
 * part02-arrays-funcs.pdf p.5
 */

#include <stdio.h>

#define N 10

int main(void) {
	int myarray[N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	myarray[3] = 400;
	myarray[10] = 900;   /* Εκτός ορίων - ΔΕΝ μας προειδοποιεί
				με κάποιο σφάλμα η C */
	return 0;
}