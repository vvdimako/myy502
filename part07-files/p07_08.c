/*
 * part07-files.pdf p.18
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	FILE *infile;
	int c;
	char buf[81];
	char *p, tokens[] = " \n\t";
	
	if ((infile = fopen("testWords.ascii", "r")) == NULL) {
		printf("testWords.ascii: No such file\n");
		exit(1);
	}
	
	while (fgets(buf, 81, infile) != NULL) {
		c = buf[strlen(buf) - 1];
		p = strtok(buf, tokens);   /* show @ screen the words in buf[] */
		while (p) {
			printf("%s ", p);        /* put a space between words */
			p = strtok(NULL, tokens);
		}
		if (c == '\n')
			printf("\n");
	}
	fclose(infile);
	
	return 0;
}
