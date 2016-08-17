/*
 * part11-ipc-pipes.pdf p.13
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* You should compile p11_03.c before executing this program */
int main(void) {
	int pfd[2];
	char s[10];

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
		printf("(%d) - I am the child. I will exec pipe2.\n", getpid());
		sprintf(s, "%d", pfd[0]);   /* Write pfd[0] in a string */
		execl("./pipe2", "pipe2", s, NULL);   /* Pass s as an argument */
		printf("exec() failed!\n");
	}
	return 0;
}