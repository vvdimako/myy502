/*
 * part06-structs.pdf p.33-34
 */

#include <stdio.h>
#include <stdlib.h>

struct listnode {
	int value;   /* We store a number here */
	struct listnode *next;   /* Pointer to the next node in the list */
};

typedef struct listnode listnode_t;   /* for simplicity & clarity */

/* Function prototype */
void find_sum(listnode_t *node);

int main(void) {
	listnode_t *node, *head = NULL;   /* head: pointer to start of list */
	int n;
	
	printf("How many numbers? ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Invalid number!\n");
		return 1;
	}
	
	for (; n > 0; n--) {
		node = (listnode_t *) malloc(sizeof(listnode_t));
		if (node == NULL)
			return 1;
		
		printf("Enter a number: ");
		scanf("%d", &node->value);
		
		if (head == NULL) {   /* Empty list */
			node->next = NULL;
			head = node;
		}
		else {                /* Non-empty list */
			node->next = head;
			head = node;
		}
	}
		
	find_sum(head);

	return 0;
}

void find_sum(listnode_t *node) {
	int sum = 0;
	
	while (node != NULL) {  /* Traverse the list till its end */
		sum += node->value;   /* Value of current node */
		node = node->next;    /* Point to the next node */
	}
	
	printf("sum of numbers = %d\n", sum);
}