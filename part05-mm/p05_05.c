/*
 * part05-dmm.pdf p.25
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, *a[10], N;
	
	printf("Enter the number of columns (N): ");
	scanf("%d", &N);
	
	for (i = 0; i < 10; i++)
		a[i] = (int *) malloc((N - i) * sizeof(int));
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < N - i; j++) {
			a[i][j] = i + j;
			printf("a(%d,%d)=%d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	return 0;
}