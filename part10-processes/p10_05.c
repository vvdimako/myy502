/*
 * part10-processes.pdf p.16
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	printf("parent (%d) about to call fork\n", getpid());
	fork();
	printf("Hi from process %d\n", getpid());
	return 0;
}