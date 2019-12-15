/*
 * part10-processes.pdf p.13
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	/* Execute "ls -l" with execv; arguments are in an array of string pointers */
	char *arg[3] = {"ls", "-l", NULL};

	printf("Before calling execv\n");
	execv("/bin/ls", arg);
	return 0;
}