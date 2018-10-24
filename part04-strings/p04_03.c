/*
 * part04-strings.pdf p.8
 */

#include <stdio.h>

int main(void) {
	char test1[5], test2[5];
	scanf("%s", test1);
	printf("test1 = %s\n", test1);
	gets(test2);   /* Το test2 θα είναι ίσο με "End Of Line"
			  από την προηγούμενη είσοδο */
	printf("test2 = %s\n", test2);
	return 0;
}