#include <stdio.h>

void print_ary(int* pa, int size); // function declaration, 2 parameters

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 }; // array with 5 elements
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 }; // array with 7 elements

	print_ary(ary1, 5); // print ary1, passing the number of elements
	printf("\n");
	print_ary(ary2, 7); // print ary2, passing the number of elements

	return 0;
}

void print_ary(int* pa, int size) // declare parameters for the array name and the number of elements
{
	int i;

	for (i = 0; i < size; i++) // determine the number of iterations based on the value of size
	{
		printf("%d ", pa[i]);
	}
}