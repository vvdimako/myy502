/*
 * part07-files.pdf p.16
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *infile;
	int k;
	char s1[20], s2[20], buf[81];
	float f;
	
	if ((infile = fopen("testSscanf.txt", "r")) == NULL) {
		printf("testSscanf.txt: No such file\n");
		exit(1);
	}
	
	while (fgets(buf, 81, infile) != NULL) {
		puts(buf);
		sscanf(buf, "%d %s %s %f", &k, s1, s2, &f);
		printf("%d\t%s\t%s\t%f\n", k, s1, s2, f);
	}
	
	fclose(infile);
	
	return 0;
}
