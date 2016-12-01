/*
 * part10-processes.pdf p.24
 */

#include <stdio.h>
#include <unistd.h>

int a = 5;

int main(void) {
	int b = 10;

	printf("parent about to call fork\n");
	if (fork() == 0) {
		printf("child: a = %d, b = %d\n", a, b);
		a++;
		b++;
		printf("child now: a = %d, b = %d\n", a, b);
	}
	else {
		printf("parent: a = %d, b = %d\n", a, b);
		a--;
		b--;
		printf("parent now: a = %d, b = %d\n", a, b);
	}
	return 0;
}