/*
 * part12-ipc-other.pdf p.5
 */

#include "fifo.h"

/*
 * Compilation: gcc client.c -o client
 * Execution: ./client
 * Note: Start server before client.
 */
int main(void) {
	int readfd, writefd;
	char msg[100] = "Hello from client!";

	/* Open the FIFOs. We assume the server has already created them. */
	if ( (writefd = open(FIFO1, O_WRONLY)) < 0 )
		printf("client: can't open write fifo: %s\n", FIFO1);
	if ( (readfd = open(FIFO2, O_RDONLY)) < 0 )
		printf("client: can't open read fifo: %s\n", FIFO2);

	/* client code */
	printf("client: Sending hello message to server!\n");
	write(writefd, msg, sizeof(msg));

	sleep(4);
	printf("client: Receiving hello message from server!\n");
	read(readfd, msg, sizeof(msg));
	printf("client received: \"%s\"\n", msg);

	close(readfd);
	close(writefd);
	/* Delete the FIFOs, now that we're finished. */
	if (unlink(FIFO1) < 0)
		printf("client: can't unlink %s\n", FIFO1);
	if (unlink(FIFO2) < 0)
		printf("client: can't unlink %s\n", FIFO2);
	return 0;
}