#include <stdio.h>

int sum(int x, int y); // declaration of the sum function

int main(void) // start of the main function
{
	int a = 10, b = 20;
	int result; // variable to store the result of adding two integers (result)

	result = sum(a, b); // call the sum function
	printf("result : %d\n", result);

	return 0;
} // end of the main function

int sum(int x, int y) // start of the definition of the sum function
{
	int temp; // variable to temporarily store the sum of two integers

	temp = x + y; // store the sum of x and y in temp

	return temp; // return the value of temp
} // end of the sum function