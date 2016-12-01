/*
 * part10-processes.pdf p.22
 */

#include <stdio.h>
#include <unistd.h>

int a = 5;

int main(void) {
	int b = 10;

	printf("parent about to call fork\n");
	if (fork() == 0)
		printf("Child (pid %d): a = %d, b = %d\n", getpid(), a, b);
	else
		printf("Parent (pid %d): a = %d, b = %d\n", getpid(), a, b);
	return 0;
}