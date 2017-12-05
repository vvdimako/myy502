/*
 * part09-binfiles.pdf p.29
 */

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define Create (O_WRONLY|O_CREAT|O_TRUNC)
#define UserRW (S_IRUSR|S_IWUSR)

int main(void) {
	int fd;
	int x = 1454654714;

	fd = open("binfile", Create, UserRW);
	if (fd < 0) {
		perror("An error occurred");
		exit(errno);
	}
	write(fd, &x, sizeof(int));
	close(fd);
	
	return 0;
}
