/*
 * part04-strings.pdf p.13
 */

#include <stdio.h>

int main(void) {
	char buffer[50];
	int n, a = 5, b = 3;
	n = sprintf(buffer, "%d plus %d is %d", a, b, a+b);
	printf("[%s] is a %d char long string\n", buffer, n);
	return 0;
}