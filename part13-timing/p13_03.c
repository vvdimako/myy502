/*
 * part13-timing.pdf p.16
 */

#include <stdio.h>
#include <sys/times.h>   /* for times() */
#include <unistd.h>      /* for sysconf() */

int main(void) {
	double t1, t2, cpu_time;   /* to avoid integer division */
	struct tms tb1, tb2;       /* needed by times() */
	long ticspersec;
	int i, sum = 0;

	t1 = (double) times(&tb1);           /* times() returns (long) int */
	for (i = 0; i < 100000000; i++)
		sum += i;
	t2 = (double) times(&tb2);

	cpu_time = (double) ((tb2.tms_utime + tb2.tms_stime) -
	                     (tb1.tms_utime + tb1.tms_stime));
	ticspersec = sysconf(_SC_CLK_TCK);   /* # of clock ticks per sec */

	printf("Real time: %lf sec; CPU time: %lf sec.\n", 
	       (t2 - t1) / ticspersec, cpu_time / ticspersec);

	return 0;
}
