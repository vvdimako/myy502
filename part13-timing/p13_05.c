/*
 * part13-timing.pdf p.19
 */

#include <stdio.h>
#include <sys/time.h>   /* Για την gettimeofday() */

/*
 * Θεωρούμε ότι ο χρόνος για την κλήση της gettimeofday()
 * είναι αμελητέος σε σχέση με την ανάλυση.
 */
int main(void) {
	struct timeval tv1, tv2;
	int resolution;

	gettimeofday(&tv1, NULL);
	do {
		gettimeofday(&tv2, NULL);
	} while (tv1.tv_usec == tv2.tv_usec);   /* Μέχρι να αλλάξει */

	resolution = tv2.tv_usec - tv1.tv_usec;   /* Σε μsec */

	printf("Resolution of gettimeofday(): %d usec.\n", resolution);

	return 0;
}
