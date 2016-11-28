/*
 * part07-files.pdf p.19
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function prototype */
void CheckDiomedes(char *X, int *counter);

int main(void) {
	FILE *infile;
	char buf[81];
	int nOcc = 0;
	
	if ((infile = fopen("iliada.txt", "r")) == NULL) {
		printf("iliada.txt: No such file\n");
		exit(1);
	}
	
	while (fscanf(infile, "%s", buf) != EOF)
		CheckDiomedes(buf, &nOcc);
	printf("\nDiomidis: %d\n", nOcc);
	
	fclose(infile);
	
	return 0;
}

void CheckDiomedes(char *X, int *counter) {
	char *c = strstr(X, "Diomidis");
	
	while (c) {
		(*counter)++;
		c += strlen("Diomidis");
		c = strstr(c, "Diomidis");
	}
	printf("%s %d\n", X, *counter);
}
