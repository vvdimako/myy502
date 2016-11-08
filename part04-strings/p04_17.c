/*
 * part04-strings.pdf p.41
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;
	printf("argc = %d\n", argc);
	printf("Program name: %s\n", argv[0]);
	printf("Arguments: ");
	for (i = 1; i < argc; i++)
		printf("%s%s", argv[i], (i == argc - 1) ? "\n" : ", ");
	return 0;
}