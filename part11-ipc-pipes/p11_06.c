/*
 * part11-ipc-pipes.pdf p.26
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* gcc -o pipe4 -s p11_06.c */
int main(int argc, char *argv[]) {
	int n;
	char msg[10];

	printf("(%d) - I am pipe4. I will read standard input.\n", getpid());

	while ((n = read(STDIN_FILENO, msg, 2)) >= 0) {
		if (n == 0)   /* EOF */
			break;
		printf("(pipe4) - read %d bytes from the pipe [%.*s]\n", n, n, msg);
	}

	if (n < 0) {
		perror("read() from child");
		exit(1);
	}

	return 0;
}