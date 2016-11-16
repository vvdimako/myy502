/*
 * part06-structs.pdf p.17
 */

#include <stdio.h>

struct person {
	char firstName[20];
	char lastName[20];
	char gender;
	int  age;
};

/* Function prototype */
struct person inc_age(struct person x);

int main(void) {
	struct person x1, x2;
	
	x1.age = 45;
	x2 = inc_age(x1); /* By value (copy) */
	
	printf("x1.age = %d\n", x1.age);
	printf("x2.age = %d\n", x2.age);
	
	return 0;
}

struct person inc_age(struct person x) {
	x.age += 1;
	return x;
}