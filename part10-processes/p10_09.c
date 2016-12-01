/*
 * part10-processes.pdf p.28
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
	int pid;

	pid = fork();
	if (pid == 0)
		return 5;
	printf("parent (%d) waits for child (%d)...\n", getpid(), pid);
	waitpid(pid, NULL, 0);
	printf("child terminated!\n");
	return 0;
}