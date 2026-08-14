#include <stdio.h>

void print_ary(int* pa); // function declaration

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary); // call the function, passing the array name

	return 0;
}

void print_ary(int* pa) // declare a pointer as a parameter
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]); // use pa to express the array elements
	}
}