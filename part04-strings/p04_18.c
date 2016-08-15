/*
 * part04-strings.pdf p.42
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, sum = 0;
	printf("Program name: %s\n", argv[0]);
	if (argc < 2)
		exit(1);   /* Nothing to add */
	for (i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);
	printf("Result: %d\n", sum);
	return 0;
}