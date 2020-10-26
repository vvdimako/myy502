/*
 * part03-pointers.pdf p.36
 */

#include <stdio.h>

int main(void) {
	char buf[] = "hello";
	char *ptr = "geia sou";
	char *ptr1 = "file mou";
	
	buf[2] = '$';
	printf("%s\n", buf);
	
//	ptr[2] = '%';   /* crash (why??) */

	ptr = ptr1;
	printf("%s\n", ptr);
	
//	ptr[2] = '#';   /* crash (why??) */
//	buf = ptr;   /* compile error (why??) */

	ptr = buf;
	ptr[2] = '1';
	printf("%s\n", ptr);
	
	ptr = "bonjour";
	printf("%s\n", ptr);
	
	printf("buf occupies %lu bytes in memory.\n", sizeof(buf));   /* ??? */
	
	return 0;
}
