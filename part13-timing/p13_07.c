/*
 * part13-timing.pdf p.21
 */

#include <stdio.h>
#include <sys/time.h>   /* for setitimer */
#include <signal.h>   /* for signal */
#include <stdlib.h>   /* for exit */

void handleAlarm(int);

int main(void) {
	struct itimerval it_val;   /* for setting itimer */

	if (signal(SIGALRM, handleAlarm) == SIG_ERR) {   /* set SIGALRM handler */
		perror("Unable to catch SIGALRM");
		exit(1);
	}

	it_val.it_value.tv_sec	= 0;   /* set the timer */
	it_val.it_value.tv_usec	= 500000;   /* 0.5 sec */
	it_val.it_interval	= it_val.it_value;   /* repeat every 0.5 sec */

	if(setitimer(ITIMER_REAL, &it_val, NULL) == -1) {
		perror("error calling setitimer()");
		exit(1);
	}

	while (1);

	return 1;
}

void handleAlarm(int ignore) {
	printf("0.5 sec passed...\n");
}
