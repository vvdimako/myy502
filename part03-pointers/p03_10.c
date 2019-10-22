/*
 * part03-pointers.pdf p.40-41
 */ 

#include <stdio.h>

/* Function prototypes */
int strcmp1(char s1[], char s2[]);
int strcmp2(char *s1, char *s2);

int main(void) {
	char s0[] = "abcd";
	char s1[] = "abce";
	char s2[] = "abc";
	int res;
	
	res = strcmp1(s0, s1);
	printf("%s %s %s\n", s0, (res == 0) ? "==" : (res < 0) ? "<" : ">", s1);
	res = strcmp2(s0, s2);
	printf("%s %s %s\n", s0, (res == 0) ? "==" : (res < 0) ? "<" : ">", s2);
	
	return 0;
}

int strcmp1(char s1[], char s2[]) {
	int i;
	for (i = 0; s1[i] == s2[i]; i++) {
		if (s1[i] == '\0')
			return 0;
	}
	return (s1[i] - s2[i]);
}

int strcmp2(char *s1, char *s2) {
	for (; *s1 == *s2; s1++, s2++) {
		if (*s1 == '\0')
			return 0;
	}
	return *s1 - *s2;
}