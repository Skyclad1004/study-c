#include <stdio.h>

int main(void)
{
	int a = 10; // declare and initialize a variable
	int* p = &a; // declare a pointer and initialize it to point to a
	double* pd; // pointer to a double variable

	pd = p; // assign the value of pointer p to pointer pd
	printf("%lf\n", *pd); // print the value of the variable pointed to by pd

	return 0;
}