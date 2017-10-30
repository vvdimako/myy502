/*
 * part04-strings.pdf p.15
 */

#include <stdio.h>

int main(void) {
	int k;
	char x[30] = "2 minutes to 12.0";
	char *p = x;
	char y[30];
	
	while(sscanf(p, "%s", y) > 0) {
		k = printf("%s\n", y);   /* # chars in y, +1 */
		p = p + k;   /* skip k+1 chars */
	}
	return 0;
}