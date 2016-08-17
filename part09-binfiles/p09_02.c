/*
 * part09-binfiles.pdf p.8
 */

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void) {
	int fd;

	fd = open("/tmp/nosuchfile", O_RDWR);
	if (fd < 0) {
		perror("Egine lathos: ");   /* Εδώ θα μπει το μήνυμα */
		exit(errno);
	}
	return 0;
}