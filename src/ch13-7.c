#include <stdio.h>

void add_ten(int* pa); // declare a pointer pa as a parameter

int main(void)
{
	int a = 10;

	add_ten(&a); // pass the address of a as the argument
	printf("a : %d\n", a); // print the increased value of a

	return 0;
}

void add_ten(int* pa) // pointer pa receives the address of a
{
	*pa = *pa + 10; // increase the value of the variable pointed to by pa by 10
}