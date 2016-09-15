/*
 * part03-pointers.pdf p.36-38
 */

#include <stdio.h>

/* Function prototypes */
void strcpy1(char s[], char d[]);
void strcpy2(char *s, char *d);
void strcpy3(char *s, char *d);
void strcpy4(char *s, char *d);

int main(void) {
	char x[30] = "abcdef";
	char a[10], b[12], c[7], d[10];
	
	strcpy1(x, a);
	strcpy2(x, b);
	strcpy3(x, c);
	strcpy4(x, d);
	
	printf("x = %s\n", x);
	printf("a = %s\n", a);
	printf("b = %s\n", b);
	printf("c = %s\n", c);
	printf("d = %s\n", d);
	
	return 0;
}

void strcpy1(char s[], char d[]) {   /* Copy s to d */
	int i = 0;
	while (s[i] != '\0') {
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
}

void strcpy2(char *s, char *d) {
	while (*s != '\0') {
		*d = *s;
		s++;
		d++;
	}
	*d = '\0';
}

void strcpy3(char *s, char *d) {
	int i = 0;
	while ((d[i] = s[i]) != '\0')
		i++;
}

void strcpy4(char *s, char *d) {
	while ((*d = *s) != '\0') {
		s++;
		d++;
	}
}