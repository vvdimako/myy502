/*
 * part10-processes.pdf p.11
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	printf("Before calling execl\n");
	/* Εκτέλεση "ls -l". Δηλαδή "ls" με 1 όρισμα το "-l" */
	execl("/bin/ls", "ls", "-l", NULL);   /* Δοκιμάστε "ls" αντί για "/bin/ls" */
	printf("After calling execl\n");
	return 0;
}