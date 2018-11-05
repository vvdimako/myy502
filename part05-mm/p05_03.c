/*
 * part05-dmm.pdf p.16-17
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m, i, j;
	float mo = 0, **measurements;
	
	/* Learn the dimensions */
	printf("Enter the number of experiments: ");
	scanf("%d", &m);
	printf("Enter the number of measurements per experiment: ");
	scanf("%d", &n);
	
	/* Space for m pointers to experiments */
	measurements = (float **) malloc(m * sizeof(float *));
	if (measurements == NULL)
		exit(1);
	
	for (i = 0; i < m; i++) {  /* For each experiment, space for n measurements */
		measurements[i] = (float *) malloc(n * sizeof(float));
		if (measurements[i] == NULL)
			exit(1);
	}

	for (i = 0; i < m; i++) {
		printf("Experiment #%d\n", i);
		for (j = 0; j < n; j++) {
			printf("\tMeasurement #%d: ", j);
			scanf("%f", &measurements[i][j]);
		}
	}
	
	printf("\nResults: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			mo += measurements[i][j];
		mo /= n;
		printf("Experiment #%d, mo = %.2f\n", i, mo);
	}

	for (i = 0; i < m; i++)
		free(measurements[i]);   /* Free row i */
	free(measurements);        /* Free the array of pointers */
	
	return 0;
}
