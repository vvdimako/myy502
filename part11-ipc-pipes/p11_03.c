/*
 * part11-ipc-pipes.pdf p.14
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* gcc -o pipe2 -s p11_03.c */
int main(int argc, char *argv[]) {
	int pfd, n;
	char msg[10];

	if (argc != 2)
		exit(1);
	pfd = atoi(argv[1]);
	printf("(%d) - I am %s. I will read from fd %d\n", getpid(), argv[0], pfd);

	while ((n = read(pfd, msg, 2)) >= 0) {
		if (n == 0)   /* EOF */
			break;
		printf("(%s) - read %d bytes from the pipe [%.*s]\n", argv[0], n, n, msg);
	}

	if (n < 0) {
		perror("read()");
		exit(1);
	}

	return 0;
}