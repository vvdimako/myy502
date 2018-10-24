/*
 * part04-strings.pdf p.16
 */

#include <stdio.h>

int main(void) {
	int k, count;
	char x[30], y[30], *p;
	
	while (1) {
		count = 0;
		if (fgets(x, 30, stdin) == NULL)   /* Ctrl-D */
			break;
		p = x;
		while (sscanf(p, "%s", y) > 0) {
			k = printf("%s\n", y);
			p = p + k;
			count++;
		}
		printf("Total number of words: %d\n", count);
	}
	
	return 0;
}