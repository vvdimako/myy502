/*
 * part07-files.pdf p.15
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	char buf[101], maxWord[101];
	int maxLength = 0;
	
	strcpy(maxWord, "");
	
	while (fscanf(stdin, "%s", buf) != EOF) {
		if (strlen(buf) > maxLength) {
			strcpy(maxWord, buf);
			maxLength = strlen(buf);
		}
	}
	
	fprintf(stdout, "Max string is: %s with length %d\n", maxWord, maxLength);
	
	return 0;
}
