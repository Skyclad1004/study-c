#include <stdio.h>

int main(void)
{
	int a; // declare a regular variable
	int *pa; // declare a pointer

	pa = &a; // assign the address of a to the pointer
	*pa = 10; // assign 10 to variable a through the pointer

	printf("Value of a via pointer : %d\n", *pa);
	printf("Value of a via variable name : %d\n", a); // print the value of variable a

	return 0;
}