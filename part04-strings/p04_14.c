/*
 * part04-strings.pdf p.26
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	char email[80];
	char token[] = "@.";
	char *s;
	
	printf("type email address: ");
	scanf("%s", email);
	printf("fields of email address: ");
	s = strtok(email, token);
	if (s != NULL)
		printf("%s", s);
	while ((s = strtok(NULL, token)) != NULL)
		printf(", %s", s);
	printf("\n");
	
	return 0;
}