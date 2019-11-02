/*
 * part04-strings.pdf p.21
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	char a[30] = "Kalimera, ";
	char b[20] = "Kalo mathima!";
	
	strcpy(a, b);
	printf("%s\n", a);
	
	sprintf(a, "%s", "Kalimera, ");
	
	strncpy(a, b, 4);
	printf("%s\n", a);
	
	sprintf(a, "%s", "Kalimera, ");
	
	strcat(a, b);
	printf("%s\n", a);
	
	return 0;
}