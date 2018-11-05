/*
 * part05-dmm.pdf p.28
 */

#include <stdio.h>
#include <stdlib.h>

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
			a[i * N + j] = 1;
	
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", a[i * N + j]);
		printf("\n");
	}
	
	free(a);   /* 1 free for the whole space */
	
	return 0;
}