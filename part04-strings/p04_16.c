/*
 * part04-strings.pdf p.33-34
 */

#include <stdio.h>

int main(void) {
	int 	i;   /* Number to print */
	double 	f;   /* Number to print*/
	
	printf("Enter an integer (use either + or -): ");
	scanf("%d", &i);
	
	printf("This is the integer...................|%d|\n", i);
	printf("This is the integer in octal..........|%o|\n", i);
	printf("Octal with leading zero...............|%#o|\n", i);
	printf("This is the integer in hex............|%x| or |%X|\n", i, i);
	printf("Hex with leading 0x...................|%#x| or |%#X|\n", i, i);
	printf("Forcing a plus or minus sign..........|%+d|\n", i);
	printf("Include space before + numbers........|% d|\n", i);
	printf("Field width of 3......................|%3d|\n", i);
	printf("Field width of 5......................|%5d|\n", i);
	printf("Field width of 7......................|%7d|\n", i);
	printf("Same as above with left justification.|%-7d|\n", i);
	printf("Field width of 7 with zero fill.......|%07d|\n", i);
	printf("At least 3 digits.....................|%.3d|\n", i);
	printf("At least 5 digits.....................|%.5d|\n", i);
	printf("Field width of 10, at least 7 digits..|%10.7d|\n", i);
	
	printf("\nEnter a floating point number: ");
	scanf("%lf", &f);
	
	printf("This is the number....................|%f|\n", f);
	printf("Forcing a plus or minus sign..........|%+f|\n", f);
	printf("Field width of 20.....................|%20f|\n", f);
	printf("0 decimal places......................|%.0f|\n", f);
	printf("0 decimal places forcing decimal......|%#.0f|\n", f);
	printf("3 decimal places......................|%.3f|\n", f);
	printf("20 decimal places.....................|%.20f|\n", f);
	printf("Field width of 20, 3 decimal places...|%20.3f|\n", f);
	
	printf("\nHere is the number in e format:\n");
	printf("3 decimal places......................|%.3e|\n", f);
	printf("5 decimal places & big 'e'............|%.5E|\n", f);
	
	printf("\nHere is the number in g format:\n");
	printf("No special requests...................|%g|\n", f);
	printf("Maximum of 1 significant figure.......|%.1g|\n", f);
	printf("Maximum of 4 significant figures......|%.4g|\n", f);
	
	return 0;
}