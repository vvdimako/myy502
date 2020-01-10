/*
 * part12-ipc-other.pdf p.5
 */

#include "p12_01-fifo.h"
#include <string.h>

/*
 * Compilation: gcc server.c -o server
 * Execution: ./server
 * 
 * The server MUST be executed before the client so as to create the FIFO!
 */
int main(void) {
	int readfd, writefd;
	char msg[100];

	/* Create the FIFOs - one for reading and one for writing. */
	if (mkfifo(FIFO1, PERMS) < 0)
		printf("server: can't create fifo: %s\n", FIFO1);
	if (mkfifo(FIFO2, PERMS) < 0) {
		unlink(FIFO1);
		printf("server: can't create fifo: %s\n", FIFO2);
	}

	/* Open the FIFOs - one for reading and one for writing */
	if ( (readfd = open(FIFO1, O_RDONLY)) < 0 )
		printf("server: can't open read fifo: %s\n", FIFO1);
	if ( (writefd = open(FIFO2, O_WRONLY)) < 0 )
		printf("server: can't open write fifo: %s\n", FIFO2);

	/* server code */
	printf("server: Receiving hello message from client!\n");
	read(readfd, msg, sizeof(msg));
	printf("server received: \"%s\"\n", msg);

	sleep(5);
	printf("server: Sending hello message to client!\n");
	strncpy(msg, "Hello from server!", 100);
	write(writefd, msg, sizeof(msg));

	close(readfd);
	close(writefd);

	return 0;
}
