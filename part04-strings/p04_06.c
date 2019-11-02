/*
 * part04-strings.pdf p.11
 */

#include <stdio.h>

/* Function prototypes */
void myputs0(char *string);
void myputs1(char *string);
void myputs2(char *string);

int main(void) {
	char str[10] = "Hello";
	myputs0(str);
	myputs1(str);
	myputs2(str);
	return 0;
}

void myputs0(char *string) {
	int i = 0;
	while (string[i] != '\0')
		putchar(string[i++]);
}

void myputs1(char *string) {
	while (*string != '\0') {
		putchar(*string);
		string++;
	}
}

void myputs2(char *string) {
	/* Το '\0' έχει ASCII κωδικό μηδέν (0)! */
	while (*string)
		putchar(*(string++));
}