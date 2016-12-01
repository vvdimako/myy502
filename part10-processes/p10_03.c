/*
 * part10-processes.pdf p.12
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	printf("Before calling execl, pid = %d\n", getpid());
	execl("./a.out", "a.out", NULL);
	printf("After calling execl\n");
	return 0;
}