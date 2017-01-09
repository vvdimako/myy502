/*
 * part13-timing.pdf p.4
 */

#include <stdio.h>

/* Function prototypes */
int a(void);
int b(void);

int main(void) {
	int iterations = 1000;
	printf("profiling example.\n");
	for (; iterations > 0; iterations--) {
		a();
		b();
	}
	return 0;
}

int a(void) {
	int i, sum = 0;
	for (i=0; i < 100000; i++)
		sum += i;
	return sum;
}

int b(void) {
	int i, sum = 0;
	for (i = 0; i < 400000; i++)   /* should be x4 the time of a() */
		sum += i;
	return sum;
}
