/*
 * part03-pointers.pdf p.46
 */

#include <stdio.h>

int main() 
{
	char buf[] = "hello";
	char *ptr = "hello";
	void test1(char s[]);
	void test2(char *s);
	
	//buf = ptr;
	ptr = buf;
	//buf = "dolly";
	ptr = "dolly";
	*buf = 'D';
	//*ptr = 'D';
	printf("%d\n", sizeof(buf));
	printf("%d\n", sizeof(ptr));
	test1(buf);
	test1(ptr);
	test2(buf);
	test2(ptr);
	return 0;
}

void test1(char s[]) 
{
	printf("%d, %c\n", sizeof(s), *(s+1));
}

void test2(char *s) 
{
	printf("%d, %c\n", sizeof(s), s[1]);
}
