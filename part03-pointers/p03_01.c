/*
 * part03-pointers.pdf p.4
 */

#include <stdio.h>
#include <stdint.h>

int main(void) {
	int var1;
	char var2[10];
	
	printf("Address of var1 variable: %p\n", (void *) &var1);
	printf("Address of var2 variable: %p\n", (void *) &var2);
	return 0;
}