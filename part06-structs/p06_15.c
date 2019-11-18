/*
 * part06-structs.pdf p.42
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

/* Function prototype */
void print_item(struct item x);

int main(void) {
	struct item x = {INT_TYPE, {4}};
	print_item(x);
	return 0;
}

void print_item(struct item x) {
	if (x.type == INT_TYPE)
		printf("value = %d\n", x.value.ival);
	if (x.type == REAL_TYPE)
		printf("value = %f\n", x.value.fval);
}
