/*
 * part02-arrays-funcs.pdf p.36
 */

#define SCALE 2

/* Μεταβλητή ορισμένη αλλού */
extern int number;

int f(int x) {
	int y;
	y = x*SCALE + number;
	return y;
} 
