/*
 * part05-dmm.pdf p.5
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i;
	float mo = 0, *measurements;
	
	printf("Enter the number of measurements: ");
	scanf("%d", &n);
	
	/* Mnimi gia n metriseis */
	measurements = (float *) malloc(n * sizeof(float));
	if (measurements == NULL)
		exit(1);
	for (i = 0; i < n; i++)
		scanf("%f", &measurements[i]);
	for (i = 0; i < n; i++)
		mo += measurements[i];
	
	mo /= n;
	free(measurements);
	
	printf("mo = %.2f\n", mo);
	
	return 0;
}