/*
 * part10-processes.pdf p.13
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	/* Εκτέλεση "ls -l". Πίνακας με 3 δείκτες σε συμβολοσειρές */
	char *arg[3] = {"ls", "-l", NULL};

	printf("Before calling execv\n");
	execv("/bin/ls", arg);
	return 0;
}