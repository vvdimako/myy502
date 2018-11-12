/*
 * part06-structs.pdf p.12
 */

#include <stdio.h>
#include <string.h>

struct person {
	char firstName[20];
	char lastName[20];
	char gender;
	int  age;
};

int main(void) {
	struct person x, y;
	
	scanf("%s", x.firstName);
	scanf("%s", x.lastName);
	scanf(" %c", &(x.gender));
	scanf("%d", &(x.age));
	
	y = x;   /* Note this! All bytes are copied! */
	
	printf("y.firstName: %s\n", y.firstName);
	printf("y.lastName:  %s\n", y.lastName);
	printf("y.gender:    %c\n", y.gender);
	printf("y.age:       %d\n", y.age);
	
	return 0;
}
