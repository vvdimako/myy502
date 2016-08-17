/*
 * part09-binfiles.pdf p.7
 */

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void) {
	int fd;

	fd = open("/nosuchdir/nosuchfile", O_RDWR);
	if (fd < 0) {
		fprintf(stderr, "Egine lathos: %d\n", errno);
		exit(errno);
	}
	return 0;
}