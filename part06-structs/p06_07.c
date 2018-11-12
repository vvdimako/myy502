/*
 * part06-structs.pdf p.23
 */

#include <stdio.h>
#include <string.h>

struct person {
	char firstName[20];
	char lastName[20];
	char gender;
	int  age;
};


/* Function prototype */
void initPerson(struct person *p);

int main(void) {
	struct person q;
	
	q.age = 0;
	strcpy(q.firstName, "");
	strcpy(q.lastName,  "");
	initPerson(&q);    /* By reference */
	printf("%s %s %d\n", q.firstName, q.lastName, q.age);
	
	return 0;
}

void initPerson(struct person *p) {
	strcpy(p->firstName, "xxxxx");
	strcpy(p->lastName,  "yyyyy");
	p->gender = 'M';
	p->age = 40;
}
