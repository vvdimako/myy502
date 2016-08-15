/*
 * part05-dmm.pdf p.31-32
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strBubbleSort(char *strings[], int num);   /* Πρωτότυπο */

#define SIZE 30   /* Μέγιστο μήκος για κάθε string */

int main(int argc, char *argv[]) {
	int i, NumOfStrings;
	char **array;   /* Για αποθήκευση των strings */
	
	if (argc < 2) {
		printf("Invalid number of command line arguments!\n");
		return 1;   /* ή exit(1) ή abort() */
	}
	NumOfStrings = atoi(argv[1]);
	if (NumOfStrings < 1)
		return 1;
	
	/* Μνήμη για τον πίνακα */
	array = (char **) malloc(NumOfStrings * sizeof(char *));
	if (array == NULL) {
		printf("Not enough memory available!\n");
		return 1;
	}
	
	/* Διάβασμα των string */
	for (i = 0; i < NumOfStrings; i++) {   /* malloc & αντιγραφή strings */
		array[i] = (char *) malloc(SIZE * sizeof(char));
		if (array[i] == NULL) {
			printf("Not enough memory available!\n");
			return 1;
		}
		printf("Enter string #%d: ", i);
		fgets(array[i], 29, stdin);
	}
	
	strBubbleSort(array, NumOfStrings);   /* Ταξινόμηση */
	
	puts("\nThe sorted list in ascending order is:");
	for (i = 0; i < NumOfStrings; i++)
		printf("%d) %s", i, array[i]);   /* Αντί της fgets() */
	
	return 0;
}

/*
 * Προσέξτε ότι δεν μετακινούνται τα strings - μόνο οι pointers
 */
void strBubbleSort(char *strings[], int num) {
	char *temp;
	int top, seek;
	
	for (top = 0; top < num - 1; top++) {
		for (seek = top + 1; seek < num; seek++) {
			if (strcmp(strings[top], strings[seek]) > 0) {
				/* Εναλλαγή των pointers */
				temp = strings[seek];
				strings[seek] 	= strings[top];
				strings[top] 	= temp;
			}
		}
	}
}
