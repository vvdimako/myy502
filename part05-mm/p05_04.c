/*
 * part05-dmm.pdf p.24
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, *a[10];   /* Array with 10 pointers to 10 rows */
	
	for (i = 0; i < 10; i++)
		a[i] = (int *) malloc((10 - i) * sizeof(int));   /* Row i */
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - i; j++) {
			a[i][j] = i + j;
			printf("a(%d,%d)=%d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
