#include <stdio.h>

int main(void)
{
	printf("Starting address where apple is stored : %p\n", "apple"); // print the address value
	printf("Address of the second character : %p\n", "apple" + 1); // print the address value
	printf("First character : %c\n", *"apple"); // dereference operation
	printf("Second Character : %c\n", *("apple" + 1)); // pointer expression
	printf("Third character expressed as an array : %c\n", "apple"[2]); // array expression

	return 0;
}