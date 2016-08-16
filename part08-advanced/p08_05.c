/*
 * part08-advanced.pdf p.21
 */

#include <stdio.h>

#define LEN 5

/* Function prototypes */
void update(int n, float x[], float (*operation)(float));
float triple(float f);
float inverse(float f);
float revsign(float f);
void print_array(int n, float x[]);

int main(void) {
	float array[LEN] = {1.5, 2.5, 3.5, 4.5, 5.5};
	float (*func)(float);   /* Μεταβλητή func - Δείκτης σε συνάρτηση */

	print_array(LEN, array);

	func = triple;   /* Δείχνει στη συνάρτηση triple */
	update(LEN, array, func);
	print_array(LEN, array);

	func = inverse;   /* Δείχνει στη συνάρτηση inverse */
	update(LEN, array, func);
	print_array(LEN, array);

	update(LEN, array, revsign);
	print_array(LEN, array);

	return 0;
}

void update(int n, float x[], float (*operation)(float)) {
	int i;
	for (i = 0; i < n; i++)
		x[i] = (*operation)(x[i]);   /* Ή ισοδύναμα operation(x[i]) */
}

float triple(float f) {
	return (3 * f);
}

float inverse(float f) {
	return (1 / f);
}

float revsign(float f) {
	return (-1 * f);
}

void print_array(int n, float x[]) {
	int i;
	for (i = 0; i < n; i++)
		printf("%6.2f ", x[i]);
	printf("\n");
}