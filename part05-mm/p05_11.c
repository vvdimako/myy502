/*
 * part05-dmm.pdf p.39
 */

#include <stdio.h>
#include <stdlib.h>

/* Function prototype */
void makeArray(int **ip, int size);

int main(void) {
	int *array = NULL;
	int i, N = 12;
	
	makeArray(&array, N);
	
	printf("printf from main:");
	for (i = 0; i < N; i++)
		printf(" %d", array[i]);
	printf("\n");
	
	return 0;
}

void makeArray(int **ip, int size) {
	int i;
	
	*ip = (int *) malloc(size * sizeof(int));
	
	printf("printf from mA:  ");
	for (i = 0; i < size; i++) {
		(*ip)[i] = 3 * i + 45;         /* try without () */
		printf(" %d", *((*ip) + i));   /* aka (*ip)[i] */
	}
	printf("\n");
}