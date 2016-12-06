/*
 * part11-ipc-pipes.pdf p.33
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>


int main(int argc, char *argv[]) {
	int pfd[2];

	if(pipe(pfd) < 0) {
		perror("pipe()");
		exit(1);
	}

	if (fork() == 0) {   /* child 1 */
		close(pfd[0]);   /* No reading from the pipe */
		if (dup2(pfd[1], STDOUT_FILENO) >= 0) {   /* Dup to std output */
			close(pfd[1]);   /* No longer needed */
			execl("/bin/ls", "ls", "-l", NULL);
			printf("exec() failed from child 1!\n");
		}
		perror("dup2 from child 1");
		exit(1);
	}

	if (fork() == 0) {   /* child 2 */
		close(pfd[1]);   /* No reading from the pipe */
		if (dup2(pfd[0], STDIN_FILENO) >= 0) {   /* Dup to std input */
			close(pfd[0]);   /* No longer needed */
			execl("/usr/bin/wc", "wc", NULL);
			printf("exec() failed from child 2!\n");
		}
		perror("dup2 from child 2");
		exit(1);
	}

	/* wait children???? */

	return 0;
}