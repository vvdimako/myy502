/*
 * part11-ipc-pipes.pdf p.4
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
	int n, pfd[2];
	char msg[50];

	if(pipe(pfd) < 0) {
		perror("pipe()");
		exit(1);
	}

	if (fork() != 0) {
		close(pfd[0]);   /* No reading by the parent */
		printf("(%d) - I am the parent; sending hello message.\n", getpid());
		write(pfd[1], "hello!!", 7);
	}
	else {
		close(pfd[1]);   /* No writing by the child */
		printf("(%d) - I am the child.\n", getpid());
		while ((n = read(pfd[0], msg, 2)) >= 0) {
			if (n == 0)   /* EOF */
				break;
			printf("(%d) - read %d bytes from the pipe [%.*s]\n", getpid(), n, n, msg);
		}

		if (n < 0) {
			perror("read()");
			exit(1);
		}
	}
	return 0;   /* All files close */
}