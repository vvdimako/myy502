/*
 * part14-timing.pdf p.21
 */

#include <stdio.h>
#include <time.h>   /* for clock_gettime() */

int main(void) {
	struct timespec ts1, ts2;
	int i, sum = 0;
	double t;

	clock_gettime(CLOCK_REALTIME, &ts1);
	for (i = 0; i < 100000000; i++)
		sum += i;
	clock_gettime(CLOCK_REALTIME, &ts2);

	t = (ts2.tv_sec - ts1.tv_sec) +             /* seconds */
	    (ts2.tv_nsec - ts1.tv_nsec) * 1.0E-9;   /* convert nsec to sec */
	printf("real time: %lf sec.\n", t);

	clock_getres(CLOCK_REALTIME, &ts1);
	printf("clock resolution: %lf nsec.\n", ts1.tv_sec*1.0E9 + ts1.tv_nsec);

	return 0;
}
