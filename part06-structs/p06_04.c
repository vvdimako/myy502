/*
 * part06-structs.pdf p.18
 */

#include <stdio.h>
#include <string.h>

struct person {
	char firstName[20];
	char lastName[20];
	char gender;
	int  age;
};

struct family {
	struct person 	father;
	struct person 	mother;
	int 		numofchildren;
	struct person 	children[5];
};

int main(void) {
	struct family fml;
	
	fml.numofchildren = 1;
	strcpy(fml.father.firstName, "Joe");
	strcpy(fml.mother.firstName, "Samantha");
	strcpy(fml.children[0].firstName, "Marry");
	
	printf("Father's name: %s\n", fml.father.firstName);
	printf("Mother's name: %s\n", fml.mother.firstName);
	printf("Child's name:  %s\n", fml.children[0].firstName);
	
	return 0;
}
