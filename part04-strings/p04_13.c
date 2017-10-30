/*
 * part04-strings.pdf p.22
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	int ret;
	char *p;
	char a[30] = "Kalimera, ";
	char b[20] = "Kalo mathima!";
	
	ret = (int) strcmp(a, b);
	printf("%d\n", ret);
	
	p = strstr(a, "im");
	printf("%s\n", p);
	
	printf("%d\n", (int) strlen(a));
	
	printf("%lu, %d\n", sizeof(a), (int) strlen(a));   /* Τι θα εκτυπωθεί; */
	
	return 0;
}