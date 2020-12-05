/*
 * part10-processes.pdf p.20 (p.19 skipped)
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	int ret;
	
	printf("parent (%d) about to call fork\n", getpid());
	ret = fork();   /* Remember what fork returned */
	if (ret == 0)   /* 0 returned to child */
		printf("I am child, with pid %d; parent pid = %d\n", getpid(), getppid());
	else            /* child's pid (>0) returned to parent */
		printf("I am the parent, with pid %d; child pid = %d\n", getpid(), ret);
	return 0;
}