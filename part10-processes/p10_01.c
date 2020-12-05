/*
 * part10-processes.pdf p.7
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	printf("Process id: %d\n", getpid());
	return 0;
}