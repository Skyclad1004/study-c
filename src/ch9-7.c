#include <stdio.h>

void swap(int* pa, int* pb); // declaration of a function that swaps the values of two variables

int main(void)
{
	int a = 10, b = 20; // declare and initialize variables

	swap(&a, &b); // call the function, passing the addresses of a and b as arguments
	printf("a:%d, b:%d\n", a, b); // print variables a and b

	return 0;
}

void swap(int* pa, int* pb) // declare pointers as parameters
{
	int temp; // temporary variable for the swap

	temp = *pa; // store the value pointed to by pa in temp
	*pa = *pb; // store the value pointed to by pb in the variable pointed to by pa
	*pb = temp; // store the value of temp in the variable pointed to by pb
}