/*
 * part10-processes.pdf p.33
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Before system()\n");
	system("ls -l");   /* Create shell to execute ls */
	printf("After system()\n");
	return 0;
}