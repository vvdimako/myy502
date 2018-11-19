/*
 * part07-files.pdf p.24
 */

#include <stdio.h>

int main(void) {
	FILE *fp;
	char line[200];

	fp = fopen("file1.txt", "r+");
	fgets(line, 2, fp);
	fseek(fp, 4, SEEK_CUR);
	fputs("w", fp);
	fseek(fp, -1, SEEK_CUR);
	fgets(line, 200, fp);
	fprintf(stdout, "%s", line);
	
	return 0;
}
