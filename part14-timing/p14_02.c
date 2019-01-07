/*
 * part14-timing.pdf p.14
 */

#include <stdio.h>
#include <time.h>

int main(void) {
	double t1, t2;           /* to avoid integer division */
	int i, sum = 0;

	t1 = (double) clock();   /* returns clock_t (usually int or long) */
	for (i = 0; i < 100000000; i++)
		sum += i;
	t2 = (double) clock();

	printf("Added 100000000 numbers in %lf sec (CPU time).\n", 
	       (t2-t1) / CLOCKS_PER_SEC);

	return 0;
}
