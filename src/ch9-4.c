#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a; // pointer pa points to variable a

	printf("Value of a Variable a : %d\n", *pa); // dereference the pointer to print a
	pa = &b; // make the pointer point to variable b
	printf("Value of a Variable b : %d\n", *pa); // dereference the pointer to print the value of b
	pa = &a; // make the pointer point to variable a again
	a = 20; // change the value by directly accessing a
	printf("Value of a Variable a : %d\n", *pa); // dereference the pointer to print the changed value

	return 0;
}