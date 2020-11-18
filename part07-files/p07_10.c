/*
 * part07-files.pdf p.20
 */

#include <stdio.h>
#include <stdlib.h>

/* Execution example: ./a.out testWords.ascii testSscanf.txt output.txt */

int main(int argc, char **argv) {
	FILE *inp, *outp;
	char line[200];
	int i;
	
	if (argc < 3) {
		printf("Invalid number of command line arguments!\n");
		exit(1);
	}
	
	outp = fopen(argv[argc-1], "w");
	
	for (i = 1; i < argc - 1; i++) {
		inp = fopen(argv[i], "r");
		while (fgets(line, 200, inp) != NULL)
			fputs(line, outp);
		fclose(inp);
	}
	fclose(outp);
	
	return 0;
}
