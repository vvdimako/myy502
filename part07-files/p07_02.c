/*
 * part07-files.pdf p.12
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *infile, *outfile;
	char buf[81];
	
	if ((infile = fopen("original.txt", "r")) == NULL) {
		printf("original.txt: No such file\n");
		exit(1);
	}
	
	if ((outfile = fopen("copy.txt", "w")) == NULL) {
		printf("Error opening copy.txt\n");
		exit(1);
	}
	
	while (fscanf(infile, "%s", buf) != EOF) {
		fprintf(outfile, "%s", buf);  /* No spaces between words */
		fprintf(stdout, "%s", buf);   /* Also show on screen */
	}
	
	fclose(infile);
	fclose(outfile);
	
	return 0;
}