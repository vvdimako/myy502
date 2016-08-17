/*
 * part11-ipc-pipes.pdf p.24
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void) {
	int out, bak;

	bak = dup(STDOUT_FILENO);   /* Backup standard output */
	out = open("file.txt", O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IRUSR);
	if (bak < 0 || out < 0)
		exit(1);

	printf("Hello world 1\n");

	dup2(out, STDOUT_FILENO);   /* out will be the new standard output */
	close(out);   /* No longer needed */

	printf("Hello world 2\n");

	dup2(bak, STDOUT_FILENO);   /* Close and restore the original standard output */
	close(bak);   /* No longer needed */

	printf("Hello world 3\n");

	return 0;
}