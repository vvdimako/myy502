/*
 * part09-binfiles.pdf p.29
 */

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(void) {
	FILE *fp;
	int x = 1454654714;

	fp = fopen("txtfile", "w");
	if (fp == NULL) {
		perror("An error occurred: ");
		exit(errno);
	}
	fprintf(fp, "%d", x);
	fclose(fp);
	return 0;
}