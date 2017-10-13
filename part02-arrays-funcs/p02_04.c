/*
 * part02-arrays-funcs.pdf p.20
 */

/* Compile with flag: -lm */

#include <stdio.h>
#include <math.h>

int main(void) {
	printf("cos(0)     = %lf\n", cos(0.0));
	printf("sin(0)     = %lf\n", sin(0.0));
	printf("tan(0)     = %lf\n", tan(0.0));
	printf("sqrt(4)    = %lf\n", sqrt(4.0));
	printf("exp(1)     = %lf\n", exp(1.0));
	printf("pow(2, 2)  = %lf\n", pow(2.0, 2.0));
	printf("log(e)     = %lf\n", log(exp(1.0)));
	printf("log10(100) = %lf\n", log10(100.0));
	printf("fabs(-8)   = %lf\n", fabs(-8.0));
	return 0;
}
