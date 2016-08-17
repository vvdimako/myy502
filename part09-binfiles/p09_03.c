/*
 * part09-binfiles.pdf p.9
 */

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main(void) {
	int fd;
	char *msg;

	fd = open("/nosuchdir/nosuchfile", O_RDWR);
	if (fd < 0) {
		msg = strerror(errno);
		fprintf(stderr, "Egine lathos %d: [%s]\n", errno, msg);
		exit(errno);
	}
	return 0;
}