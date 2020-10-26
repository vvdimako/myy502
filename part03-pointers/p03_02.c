/*
 * part03-pointers.pdf p.5
 */

#include <stdio.h>

int main(void) {
	int var = 20;    /* actual variable declaration */
	int *ip = NULL;  /* pointer variable declaration */
	
	ip = &var;   /* store address of var in pointer variable */
	
	printf("Address of var variable: %p\n", (void *) &var);
	printf("Address stored in ip variable: %p\n", (void *) ip);
	printf("Value of *ip variable: %d\n", *ip);
	return 0;
}