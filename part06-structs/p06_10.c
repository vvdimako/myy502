/*
 * part06-structs.pdf p.27
 */

#include <stdio.h>
#include <string.h>

struct Name {
	char first[20];
	char last[20];
};

struct An8rwpos {
	struct Name gname;
	float income;
};

int main(void) {
	struct An8rwpos people[2] = { 	{{"A", "B"}, 123.4},
					{{"C", "D"}, 345.67}};
	struct An8rwpos *p, me;
	
	p = &people[0];   /* = people (Δείχνει στο 0 στοιχείο του people) */
	me = *(p+1);   /* = p[1] (το πρώτο στοιχείο του p) */
	
	printf("%s %s %f \n\n",	p->gname.first, p->gname.last, p->income);
	printf("%s %s %f \n", 	people[1].gname.first, people[1].gname.last, 
				people[1].income);
	printf("%s %s %f \n",	me.gname.first, me.gname.last, me.income);
	printf("%s %s %f \n\n",	(*(p+1)).gname.first, (*(p+1)).gname.last,
				(*(p+1)).income);
	
	strcpy(p[1].gname.first, "X");
	strcpy(p[1].gname.last,  "Y");
	p[1].income = 0.0;
	
	printf("%s %s %f \n", 	people[1].gname.first, people[1].gname.last, 
				people[1].income);
	printf("%s %s %f \n\n",	me.gname.first, me.gname.last, me.income);
	
	return 0;
}