#include <stdio.h>

int* sum(int a, int b); // declaration of a function that returns the address of an int variable

int main(void)
{
	int* resp; // pointer resp (result pointer) to store the return value

	resp = sum(10, 20); // the returned address is stored in resp
	printf("Sum of the two integers : %d\n", *resp); // print the value of the variable pointed to by resp

	return 0;
}

int* sum(int a, int b) // function that returns the address of an int variable
{
	static int res;// static local variable

	res = a + b; // store the sum of two integers in res (result)

	return &res; // return the address of the static local variable
}