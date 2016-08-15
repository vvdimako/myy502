/*
 * part04-strings.pdf p.29
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("atoi(\"512\") = %d\n", 		atoi("512"));
	printf("atoi(\"512.035\") = %d\n", 	atoi("512.035"));
	printf("atoi(\"   512.035\") = %d\n", 	atoi("   512.035"));
	printf("atoi(\"   512+34\") = %d\n", 	atoi("   512+34"));
	printf("atoi(\"   512 bottles\") = %d\n", atoi("   512 bottles"));
	printf("atoi(\"does not work: 512\") = %d\n", atoi("does not work: 512"));
	printf("atol(\"1024.0001\") = %ld\n", atol("1024.0001"));
	printf("atof(\"42.0is_the_answer\") = %f\n", atof("42.0is_the_answer"));
	return 0;
}