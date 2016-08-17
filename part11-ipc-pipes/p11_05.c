/*
 * part11-ipc-pipes.pdf p.25
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* You should compile p11_06.c before executing this program */
int main(void) {
	int pfd[2];

	if (pipe(pfd) < 0) {
		perror("pipe()");
		exit(1);
	}
	if (fork() != 0) {
		printf("(%d) - I am the parent; pfd[0]=%d, pfd[1]=%d.\n", getpid(), pfd[0], pfd[1]);
		close(pfd[0]);
		printf("(%d) - I am the parent; sending hello message.\n", getpid());
		write(pfd[1], "hello!!", 7);
	}
	else {
		close(pfd[1]);
		if (dup2(pfd[0], STDIN_FILENO) >= 0) {   /* Duplicate pipe to 0 (standard input) */
			execl("./pipe4",  "pipe4", NULL);
			printf("exec() failed!\n");
		}
		perror("dup2");
	}
	return 0;
}