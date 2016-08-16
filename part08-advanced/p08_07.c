/*
 * part08-advanced.pdf p.26
 */

#include <stdio.h>

#define N		0
#define MINUS1		4-5   /* Δεν κάνει υπολογισμούς */
#define KEYBOARD	stdin
#define	then		/* τίποτε */
#define START		{
#define END		}
#define msg		"Please enter a positive number\n"
#define str		"hi!\n"
#define longloop	for (i = 0; i < n; i++) \
				printf("%d ", i);

/* gcc --save-temps p08_07.c */
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
