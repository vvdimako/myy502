/*
 * part07-files.pdf p.14
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *infile;
	char buf[101], maxWord[101];
	int maxLength = 0;
	
	if ((infile = fopen("testWords.ascii", "r")) == NULL) {
		printf("testWords.ascii: No such file\n");
		exit(1);
	}
	
	strcpy(maxWord, "");
	
	while (fscanf(infile, "%s", buf) != EOF) {
		if (strlen(buf) > maxLength) {
			strcpy(maxWord, buf);
			maxLength = strlen(buf);
		}
	}
	
	fprintf(stdout, "Max string is: %s with length %d\n", maxWord, maxLength);
	fclose(infile);
	
	return 0;
}
