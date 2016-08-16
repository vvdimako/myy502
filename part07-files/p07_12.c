/*
 * part07-files.pdf p.25
 */

#include <stdio.h>

int main(void) {
	FILE *fp;
	char line[200];

	fp = fopen("file2.test", "r+");
	printf("%ld\n", ftell(fp));
	fseek(fp, ftell(fp)+4, SEEK_SET);
	fputs("w", fp);
	fseek(fp, ftell(fp)-1, SEEK_SET);
	fgets(line, 200, fp);
	fprintf(stdout, "%s", line);
	printf("%ld\n", ftell(fp));
	fseek(fp, 4, SEEK_SET);
	fgets(line, 200, fp);
	fprintf(stdout, "%s", line);
	fclose(fp);

	return 0;
}
