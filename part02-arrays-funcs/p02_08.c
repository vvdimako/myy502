/*
 * part02-arrays-funcs.pdf p.32
 */

#include <stdio.h> 

void f(void);

int main(void) {
	int i;
	for (i = 0; i < 5; i++)
		f();
	return 0;
}

void f() {
	static int y = 0;
	y++;
	printf("%d\n", y);
}