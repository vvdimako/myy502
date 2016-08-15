/*
 * part04-strings.pdf p.7
 */

#include <stdio.h>

int main(void) {
	char string0[256];
	char string1[] = "I know where you live!";
	
	/* gets example */
	printf("Insert your full address: ");
	gets(string0);
	printf("Your address is: %s\n", string0);
	
	/* puts example */
	puts(string1);
	
	return 0;
}