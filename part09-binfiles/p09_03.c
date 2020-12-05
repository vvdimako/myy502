/*
 * part09-binfiles.pdf p.9
 */

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main(void) {
	char *msg;
	FILE *fp;

	fp = fopen("/nosuchdir/nosuchfile", "r");
	if (fp == NULL) {
		msg = strerror(errno);
		fprintf(stderr, "Egine lathos (%d): [%s]\n", errno, msg);
		exit(errno);
	}
	return 0;
}