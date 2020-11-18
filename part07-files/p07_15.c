/*
 * part07-files.pdf p.28
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fp;
	char buf[81] = "22 hours ago";

	fp = fopen("testMode.txt", "w+");
	if (fp == NULL) {
		printf("testMode.txt: No such file\n");
		exit(1);
	}
	
	fputs(buf, fp);   /* writes @ beginning of file; 
	                     previous contents are lost */

	rewind(fp);
	while (fgets(buf, 81, fp) != NULL)
		fputs(buf, stdout);   /* print @ screen */
	
	fclose(fp);

	return 0;
}
