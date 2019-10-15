/*
 * part01-intro.pdf p.47
 */

#include <stdio.h>    /* Απαραίτητο */

char c;    /* Καθολική μεταβλητή */

int main(void) {      /* Συνάρτηση main */
	int i;    /* Τοπικές δηλώσεις ΠΑΝΤΑ στην αρχή της συνάρτησης */
	float f;
	
	printf("Dwse 1 xaraktira, 1 akeraio kai ena pragmatiko\n");
	scanf("%c", &c);
	scanf("%d%f", &i, &f);  /* Η scanf ΘΕΛΕΙ & στις μεταβλητές */
	printf("c = %c, i = %d, f = %f\n", c, i, f);
	return 0;
}

