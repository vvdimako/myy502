/*
 * part06-structs.pdf p.11
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
	
	strcpy(x.firstName, "Rivaldo");
	strcpy(x.lastName, "unknown");
	x.gender = 'M';
	x.age = 37;
	
	y = x;   /* Προσέξτε αυτό! Αντιγράφονται ΟΛΑ */
	
	printf("y.firstName: %s\n", y.firstName);
	printf("y.lastName:  %s\n", y.lastName);
	printf("y.gender:    %c\n", y.gender);
	printf("y.age:       %d\n", y.age);
	
	return 0;
}