/*
 * part06-structs.pdf p.14
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person {
	char *firstName;
	char *lastName;
	char gender;
	int  age;
};

int main(void) {
	struct person x, y;
	
	x.firstName = (char *) malloc(20);   /* Allocate necessary space */
	if (x.firstName == NULL) return 0;
	x.lastName = (char *) malloc(20);
	if (x.lastName == NULL) return 0;
	
	scanf("%s", x.firstName);
	scanf("%s", x.lastName);
	scanf(" %c", &(x.gender));
	scanf("%d", &(x.age));
	
	y = x;   /* Note this! All bytes are copied! Thus POINTERS copied, too!! */
	
	printf("y.firstName: %s\n", y.firstName);
	printf("y.lastName:  %s\n", y.lastName);
	printf("y.gender:    %c\n", y.gender);
	printf("y.age:       %d\n", y.age);
	
	return 0;
}
