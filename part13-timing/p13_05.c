/*
 * part13-timing.pdf p.19
 */

#include <stdio.h>
#include <sys/time.h>   /* for gettimeofday() */

/*
 * We assume that the time for calling gettimeofday()
 * is insignifficant with respect to the resolution.
 */
int main(void) {
	struct timeval tv1, tv2;
	int resolution;

	gettimeofday(&tv1, NULL);
	do {
		gettimeofday(&tv2, NULL);
	} while (tv1.tv_usec == tv2.tv_usec);     /* till it changes */

	resolution = tv2.tv_usec - tv1.tv_usec;   /* In usec */

	printf("Resolution of gettimeofday(): %d usec.\n", resolution);

	return 0;
}
