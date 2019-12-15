/*
 * part10-processes.pdf p.11
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	printf("Before calling execl\n");
	/* Execute "ls -l". I.e. "ls" with 1 argument: "-l" */
	execl("/bin/ls", "ls", "-l", NULL);  /* Try plain "ls" instead "/bin/ls" */
	printf("After calling execl\n");
	return 0;
}