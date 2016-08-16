/*
 * part07-files.pdf p.17
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
	FILE *infile;
	char buf[101];
	
	if ((infile = fopen("testWords.ascii", "r")) == NULL) {
		printf("testWords.ascii: No such file\n");
		exit(1);
	}
	
	if (argc != 2) {
		printf("Usage: %s searchString\n", argv[0]);
		exit(1);
	}
	
	while (fgets(buf, 101, infile) != NULL) {
		if (strstr(buf, argv[1]) != NULL)
			printf("%s", buf);
	}

	fclose(infile);
	
	return 0;
}
