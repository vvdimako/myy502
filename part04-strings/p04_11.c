/*
 * part04-strings.pdf p.17
 */

#include <stdio.h>

int main(void) {
	int count;
	char x[90], y[90], *p;
	
	while (fgets(x, 90, stdin) != NULL) {
		for (count = 0, p = x; sscanf(p, "%s", y) > 0; count++) {
			p = p +printf("%s\n", y);
		}
		printf("Total number of words: %d\n", count);
	}
	return 0;
}