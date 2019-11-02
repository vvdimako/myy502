/*
 * part04-strings.pdf p.3
 */

#include <stdio.h>

int main(void) {
	char q[] = "First";
	char r[16] = {'S', 'e', 'c', 'c', 'o', 'n', 'd', '\0'};
	char s[16] = "Third";
	char t[16];   /* Δεν έχει αρχικοποιηθεί (Περιέχει σκουπίδια) */
	char *u = "Fifth";
	char *w;
	
//	t = "Fourth";   /* Δεν επιτρέπεται! Πρέπει t[0] = 'F', t[1] = 'o', ... */
	w = "Sixth";   /* Επιτρέπεται, μιας και είναι pointer */
	
	printf("q = %s\n", q);
	printf("r = %s\n", r);
	printf("s = %s\n", s);
	printf("t = %s\n", t);
	printf("u = %s\n", u);
	printf("w = %s\n", w);
	
	return 0;
}