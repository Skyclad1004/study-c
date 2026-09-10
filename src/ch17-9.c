#include <stdio.h>

struct list // self-referential structure
{
	int num; // member that stores data
	struct list* next; // pointer member that points to the structure itself
};

int main(void)
{
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 }; // initialization of the structure variables
	struct list* head = &a, * current; // initialization of the head pointer

	a.next = &b; // a's pointer member points to b
	b.next = &c; // b's pointer member points to c

	printf("head->num : %d\n", head->num); // use the num member of a, pointed to by head
	printf("head->next->num : %d\n", head->next->num); // use the num member of b, through head

	printf("list all : ");
	current = head; // initially, the current pointer points to a
	while (current != 0) // end the loop when the last structure variable has been printed
	{
		printf("%d  ", current->num); // print num of the structure variable pointed to by current
		current = current->next; // make current point to the next structure variable
	}
	printf("\n");

	return 0;
}