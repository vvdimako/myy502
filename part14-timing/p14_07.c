/*
 * part14-timing.pdf p.29
 */

#include <stdio.h>
#include <sys/time.h>   /* for setitimer */
#include <signal.h>     /* for signal */
#include <stdlib.h>     /* for exit */

void handleAlarm(int);  /* prototype of our signal handler */


int main(void) {
	struct itimerval it_val;   /* for setting itimer */

#ifdef USE_SIGNAL_INSTEAD_OF_SIGACTION

	/* Slides version: use signal instead of sigaction. */
	if (signal(SIGALRM, handleAlarm) == SIG_ERR) {   /* set SIGALRM handler */
		perror("Unable to catch SIGALRM");
		exit(1);
	}

#else

  /* Better alternative: use sigaction() instead of signal() */
	struct sigaction sact;
	
	sact.sa_handler = handleAlarm; /* Our handler to catch CTRL-C */
	sigemptyset(&sact.sa_mask);    /* No other signal to block */
	sact.sa_flags = 0;             /* Nothing special, should be 0 */
	if (sigaction(SIGALRM, &sact, NULL) < 0) {   /* set SIGALRM handler */
		perror("Could not set action for SIGALRM");
		exit(1);
	}

#endif

	it_val.it_value.tv_sec	= 0;             /* set the timer */
	it_val.it_value.tv_usec	= 500000;        /* 0.5 sec */
	it_val.it_interval	= it_val.it_value;   /* repeat every 0.5 sec */

	if(setitimer(ITIMER_REAL, &it_val, NULL) == -1) {
		perror("error calling setitimer()");
		exit(1);
	}

	while (1)                                /* loop forever */
		;
	return 1;
}


void handleAlarm(int ignore) {
	printf("0.5 sec passed...\n");
}
