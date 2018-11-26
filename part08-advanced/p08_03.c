/*
 * part08-advanced.pdf p.8,9
 */

#include <stdio.h>

enum weekday { MON = 1, TUE, WED, THU, FRI, SAT, SUN };
typedef enum weekday weekday_t;

int main(void) {
	enum weekday day = SAT;
	weekday_t backup_day = FRI;

	backup_day++;
	if (day == backup_day)
		printf("You should take a backup!\n");

	return 0;
}