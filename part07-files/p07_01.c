/*
 * part07-files.pdf p.11
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *infile, *outfile;
	char buf[10];
	
	if ((infile = fopen("original.txt", "r")) == NULL) {
		printf("original.txt: No such file\n");
		exit(1);
	}
	
	if ((outfile = fopen("copy.txt", "w")) == NULL) {
		printf("Error opening copy.txt\n");
		exit(1);
	}
	
	while (fgets(buf, 10, infile) != NULL) {
		fputs(buf, outfile);
	/*	fputs("\n", outfile); */   /* Puts one more newline */
	}
	
	fclose(infile);
	fclose(outfile);
	
	return 0;
}
