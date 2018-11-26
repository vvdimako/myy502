/*
 * part09-binfiles.pdf p.7
 */

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(void) {
	FILE *fp;

	fp = fopen("/nosuchdir/nosuchfile", "r");
	if (fp == NULL) {
		fprintf(stderr, "Egine lathos: %d\n", errno);
		exit(errno);
	}
	return 0;
}