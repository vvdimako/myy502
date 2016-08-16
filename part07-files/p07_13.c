/*
 * part07-files.pdf p.26
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fp;
	char buf[81] = "22 hours ago";

	fp = fopen("testMode.txt", "a+");
	if (fp == NULL) {
		printf("testMode.txt: No such file\n");
		exit(1);
	}
	
	fputs(buf, fp);   /* γράφει στο τέλος του αρχείου */

	rewind(fp);
	while (fgets(buf, 81, fp) != NULL)
		fputs(buf, stdout);   /* εκτύπωση στην οθόνη */
	
	fclose(fp);

	return 0;
}
