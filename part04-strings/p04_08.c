/*
 * part04-strings.pdf p.14
 */

#include <stdio.h>

int main(void) {
	int k, m;
	float f;
	char *x = "2 minutes to 12.0";
	char y[20], z[20], w[80];
	
	sscanf(x, "%d%s%s%f", &m, y, z, &f);
	printf("%d\n%s\n%s\n%f\n", m, y, z, f);
	k = sprintf(w, "%d %s %d %s", m, z, (int) f, y);
	printf("New order: %s\n", w);
	printf("with %d characters (including spaces)\n", k);
	
	return 0;
}