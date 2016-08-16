/*
 * part07-files.pdf p.13
 */

#include <stdio.h>

int main(void) {
	FILE *fp;
	
	fp = fopen("file", "w");
	fprintf(fp, "%s", "xxx");
/*	fflush(fp); */
	while (1);
	
	return 0;
}
