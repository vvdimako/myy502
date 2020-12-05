/*
 * part10-processes.pdf p.34
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/* Function prototype */
void childfunc(void);

int main(void) {
	printf("about to fork\n");
	if (fork() == 0)
		childfunc();
	printf("parent (%d) waits for child...\n", getpid());
	waitpid(-1, NULL, 0);   /* or just wait(NULL) */
	return 0;
}

void childfunc() {
	printf("child (%d) will fire up a firefox window!\n", getpid());
	execl("/usr/bin/firefox", "firefox", NULL);
	exit(5);
}
