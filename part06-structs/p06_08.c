/*
 * part06-structs.pdf p.24
 */

#include <stdio.h>

struct person {
	char name[20];
	int  age;
};

/* Function prototype */
struct person inc_age(struct person x);

int main(void) {
	struct person a = {"Me", 10};
	struct person c;
	
	c = inc_age(a);
	printf("C:%d A:%d\n", c.age, a.age);
	
	return 0;
}

struct person inc_age(struct person x) {
	x.age += 1;
	return x;
}
