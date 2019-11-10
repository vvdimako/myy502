/*
 * part05-dmm.pdf p.31-32
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strBubbleSort(char *strings[], int num);   /* Prototype */

#define SIZE 30   /* Maximum length for a string */

int main(int argc, char *argv[]) {
	int i, NumOfStrings;
	char **array;   /* For storing the strings */
	
	if (argc < 2) {
		printf("Invalid number of command line arguments!\n");
		return 1;   /* or exit(1) */
	}
	NumOfStrings = atoi(argv[1]);
	if (NumOfStrings < 1)
		return 1;
	
	/* Space for the array */
	array = (char **) malloc(NumOfStrings * sizeof(char *));
	if (array == NULL) {
		printf("Not enough memory available!\n");
		return 1;
	}
	
	/* Read the strings */
	for (i = 0; i < NumOfStrings; i++) {   /* malloc & copy strings */
		array[i] = (char *) malloc(SIZE * sizeof(char));
		if (array[i] == NULL) {
			printf("Not enough memory available!\n");
			return 1;
		}
		printf("Enter string #%d: ", i);
		fgets(array[i], 29, stdin);
	}
	
	strBubbleSort(array, NumOfStrings);   /* Sort */
	
	puts("\nThe sorted list in ascending order is:");
	for (i = 0; i < NumOfStrings; i++)
		printf("%d) %s\n", i, array[i]);
	
	return 0;
}

/*
 * Notice that no characters are move - only the string pointers
 */
void strBubbleSort(char *strings[], int num) {
	char *temp;
	int top, seek;
	
	for (top = 0; top < num - 1; top++) {
		for (seek = top + 1; seek < num; seek++) {
			if (strcmp(strings[top], strings[seek]) > 0) {
				/* Swap pointers */
				temp = strings[seek];
				strings[seek] 	= strings[top];
				strings[top] 	= temp;
			}
		}
	}
}
