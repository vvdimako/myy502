/*
 * part05-dmm.pdf p.26
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, **a, N;
	
	printf("Enter array dimension (N): ");
	scanf("%d", &N);
	
	a = (int **) malloc(N * sizeof(int *));
	for (i = 0; i < N; i++)
		a[i] = (int *) malloc((N - i) * sizeof(int));
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N - i; j++) {
			a[i][j] = i + j;
			printf("a(%d,%d)=%d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	return 0;
}