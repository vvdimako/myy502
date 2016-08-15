/*
 * part05-dmm.pdf p.29
 */

#include <stdio.h>
#include <stdlib.h>

#define mat(r,c) a[r*N+c]   /* Preprocessor macro */

int main(void) {
	int i, j, M, N;
	int *a;
	
	printf("Enter the number of rows: ");
	scanf("%d", &M);
	printf("Enter the number of columns: ");
	scanf("%d", &N);
	
	a = (int *) malloc(N * M * sizeof(int));
	
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			mat(i,j) = 1;   /* Replaced by a[i * N + j] */
	
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", mat(i,j));
		printf("\n");
	}
	
	free(a);   /* Ένα free για όλο το χώρο */
	
	return 0;
}