/*
 * part14-timing.pdf p.18
 */

#include <stdio.h>
#include <sys/time.h>   /* for gettimeofday() */

int main(void) {
	struct timeval tv1, tv2;
	int i, sum = 0;
	double t;

	gettimeofday(&tv1, NULL);
	for (i = 0; i < 100000000; i++)
		sum += i;
	gettimeofday(&tv2, NULL);

	t = (tv2.tv_sec - tv1.tv_sec) +             /* seconds */
	    (tv2.tv_usec - tv1.tv_usec) * 1.0E-6;   /* convert usec to sec */

	printf("real time: %lf sec.\n", t);

	return 0;
}
