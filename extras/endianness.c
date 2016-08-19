#include <stdio.h>

int main(void) {
	int x = 1;
	char *ptr = (char *) &x;
	printf("Detected format: %s-endian\n", (*ptr == 1) ? "Little" : "Big");
	return 0;
}
