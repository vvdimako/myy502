/*
 * part06-structs.pdf p.25
 */

#include <stdio.h>

struct person {
	char name[20];
	int  age;
};

/* Function prototypes */
struct person inc_age(struct person x);
void inc_age_ptr(struct person *x);

int main(void) {
	struct person a = {"XXX", 10}, b = {"YYY", 20}, c;
	
	c = inc_age(a);
	inc_age_ptr(&b);
	printf("C:%d A:%d B:%d\n", c.age, a.age, b.age);
	
	return 0;
}

struct person inc_age(struct person x) {
	x.age += 1;
	return x;
}

void inc_age_ptr(struct person *x) {
	x->age += 1;
}
