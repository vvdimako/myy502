/*
 * part06-structs.pdf p.37
 */

#include <stdio.h>

#define INT_TYPE  1
#define REAL_TYPE 2

struct item {
	int type;
	union {
		int   ival;
		float fval;
	} value;
};

int main(void) {
	struct item x;
	
	x.type = INT_TYPE;
	x.value.ival = 4;
	printf("%d %f\n", x.value.ival, x.value.fval);
	
	x.type = REAL_TYPE;
	x.value.fval = 28000.5;
	printf("%d %f\n", x.value.ival, x.value.fval);
	
	return 0;
}