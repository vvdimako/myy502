/*
 * part03-pointers.pdf p.42
 */

#include <stdio.h>

/* Function prototypes */
int strlen1(char s[]);
int strlen2(char *s);

int main(void) {
	char s0[] = "Byte";
	char s1[] = {'B', 'i', 't', 's', '\0'};
	printf("length of \"%s\" = %d\n", s0, strlen1(s0));
	printf("length of \"%s\" = %d\n", s1, strlen2(s1));
	return 0;
}

/* 
 * Calculates the length of the string s, 
 * excluding the terminating null byte ('\0').
 */
int strlen1(char s[]) {
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

int strlen2(char *s) {
	char *p = s;
	while (*p != '\0')
		p++;   /* Προχωράει 1 byte */
	return p-s;
}