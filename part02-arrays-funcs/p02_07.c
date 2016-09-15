/*
 * part02-arrays-funcs.pdf p.29
 */

#include <stdio.h>

char color = 'B';

void paintItGreen() {
	char color = 'G';
	printf("color@pIG: %c\n", color);
}

void paintItRed() {
	char color = 'R';
	printf("\n\t-------start pIR----\n\t");
	printf("color@pIR: %c\n\t", color);
	paintItGreen();
	printf("\tcolor@pIR: %c\n\t", color);
	printf("-------end pIR----\n\n");
}

int main(void) {
	printf("\t\tcolor@main: %c\n", color);
	paintItGreen();
	printf("\t\tcolor@main: %c\n", color);
	paintItRed();
	printf("\t\tcolor@main: %c\n", color);
	return 0;
}
