/*
 * part02-arrays-funcs.pdf p.8
 */

#include <stdio.h>

int main(void) {
	char str1[5];
	char str2[6] = {'b', 'i', 'l', 'l', '\0'};
	char str3[6] = "maria";
	char str4[] = "demi";
	
	printf("str2 = \"%s\"\n", str2);
	printf("str3 = \"%s\"\n", str3);
	printf("str4 = \"%s\"\n", str4);
	
	str2[1] = 'a';    /* ball */
	
	printf("str2 = \"%s\"\n", str2);
	
	return 0;
}
