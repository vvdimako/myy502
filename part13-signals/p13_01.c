/*
 * part13-signals.pdf p.12
 */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/* Function Prototype */
void handlectrlc(int sigid);


int main() {
	struct sigaction sact;
	
	printf("Just try to stop me ...\n");
	sact.sa_handler = handlectrlc; /* Our handler to catch CTRL-C */
	sigemptyset(&sact.sa_mask);    /* No other signal to block */
	sact.sa_flags = 0;             /* Nothing special, should be 0 */
	if (sigaction(SIGINT, &sact, NULL) < 0)
		perror("could not set action for SIGINT");
	
	/* Loop for ever */
	while(1) {
		sleep(1);                    /* Let it sleep for a while */
	}
	return 0;
}


void handlectrlc(int sigid) {
	printf("You cannot stop me with CTRL-C!\n");
}
