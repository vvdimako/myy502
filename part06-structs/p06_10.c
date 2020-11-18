/*
 * part06-structs.pdf p.26-27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct name {
	char *fname;
	char *lname;
	int  letters;   /* total # letters of first+last name */
};

/* Function prototypes */
void getinfo(struct name *pst);
void computeLen(struct name *pst);
void cleanup(struct name *pst);

int main(void) {
	struct name x;
	
	getinfo(&x);
	computeLen(&x);
	printf(" %s %s %d\n", x.fname, x.lname, x.letters);
	cleanup(&x);
	
	return 0;
}

void getinfo(struct name *pst) {
	char temp[81];
	
	printf("First name ? ");
	fgets(temp, 80, stdin);     /* Read */
	pst->fname = (char *) malloc(strlen(temp) + 1);   /* Malloc */
	if (pst->fname == NULL)
		exit(1);
	strcpy(pst->fname, temp);   /* Copy */
	
	printf("Last name ? ");
	fgets(temp, 80, stdin);
	pst->lname = (char *) malloc(strlen(temp) + 1);
	if (pst->lname == NULL)
		exit(1);
	strcpy(pst->lname, temp); 
}

void computeLen(struct name *pst) {
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void cleanup(struct name *pst) {
	free(pst->fname);
	free(pst->lname);
}
