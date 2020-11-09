/*
 * part04-strings.pdf p.10
 */

#include <stdio.h>

int main(void) {
	char lula[] = "lula";
	char *ptr = lula;
	puts(lula);
	puts(" > ");
	puts(ptr + 2);
	printf("%s > %s\n", lula, ptr+2);
	return 0;
}