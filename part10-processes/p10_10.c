/*
 * part10-processes.pdf p.29
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/* Function prototype */
void delay(void);

int main(void) {
	int pid;

	pid = fork();
	if (pid == 0)
		delay();
	printf("parent (%d) waits for child (%d)...\n", getpid(), pid);
	waitpid(pid, NULL, 0);
	printf("child terminated!\n");
	return 0;
}

void delay() {   /* Just delay */
	int i, sum = 0;
	for (i = 0; i < 1000000000; i++)
		sum += i;
	printf("child (%d) exits...\n", getpid());
	exit(5);   /* Child exits with 5 */
}