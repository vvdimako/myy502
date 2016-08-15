/*
 * part06-structs.pdf p.25
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {   /* Θα φυλάμε βαθμολογίες μαθητών */
	int AM;
	int grade;
} Student;

/* Function prototypes */
void calculate_stats(Student class[], int studNo);
void print_student_details(Student class[], int studNo);

int main(int argc, char *argv[]) {
	Student *class;
	int i, n;
	
	if (argc < 2) {
		printf("Invalid number of command line arguments!\n");
		return 1;
	}
	
	n = atoi(argv[1]);   /* Εκτέλεση προγράμματος με ορίσματα */
	class = (Student *) malloc(n * sizeof(Student));
	for (i = 0; i < n; i++) {  /* Διάβασμα n φοιτητών-βαθμών */
		printf("Student #%d (AM Grade): ", i);
		scanf("%d%d", &class[i].AM, &class[i].grade);
	}
	
	print_student_details(class, n);
	calculate_stats(class, n);
	
	return 0;
}

void calculate_stats(Student class[], int studNo) {
	int i, max = 0;
	
	for (i = 0; i < studNo; i++)
		if (class[i].grade > max)
			max = class[i].grade;
	printf("MAX GRADE = %d\n", max);
}

void print_student_details(Student class[], int studNo) {
	int i;
	printf("AA \t AM \t GRADE\n");
	for (i = 0; i < studNo; i++)
		printf("%d \t %d \t %d\n", i, class[i].AM, class[i].grade);
}