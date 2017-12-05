/*
 * part08-advanced.pdf p.26
 */

/* To see the preprocessed file (.i): gcc --save-temps p08_07.c */

#include <stdio.h>

#define N        0
#define MINUS1   4-5   /* does NOT do a calculation */
#define KEYBOARD stdin
#define	then           /* nothing */
#define START    {
#define END      }
#define msg      "Please enter a positive number\n"
#define str      "hi!\n"
#define longloop for (i = 0; i < n; i++) \
                   printf("%d ", i);

int main(void)
START
	int n = MINUS1, i;

	printf("Enter n: ");
	fscanf(KEYBOARD, "%d", &n);
	if (n < N)
	then {
		printf(str);
		printf(msg);
	END
	else START
		printf(str);
		longloop
		printf("\n");
	}

	return 0;
END
