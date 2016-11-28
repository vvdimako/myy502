/*
 * part08-advanced.pdf p.33
 */

#include <stdio.h>

int main(void) {
#ifdef __unix__
	#include <unistd.h>
	printf("Included <unistd.h>!\n");
#else
	#ifdef _WIN32
		#include <windows.h>
		printf("Included <windows.h>!\n");
	#endif
#endif
	return 0;
}