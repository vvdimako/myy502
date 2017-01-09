/*
 * part12-ipc-other.pdf p.14
 */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/* Function Prototype */
void sig_handler(int signo);

int main(void) {
	if (signal(SIGINT, sig_handler) == SIG_ERR)
		printf("Can't catch SIGINT\n");
	/* Loop for ever */
	while (1)
		sleep(1);   /* Sleep for a while */
	return 0;
}

void sig_handler(int signo) {
	printf("You cannot stop me with CTRL-C!\n");
}

