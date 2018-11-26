/*
 * part09-binfiles.pdf p.8
 */

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void) {
	FILE *fp;

	fp = fopen("/nosuchdir/nosuchfile", "r");
	if (fp == NULL) {
		perror("Egine lathos");   /* the error message will be added here */
		exit(errno);
	}
	return 0;
}