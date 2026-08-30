#include <stdio.h>

int sum(int, int); // function declaration

int main(void)
{
	int (*fp)(int, int); // function pointer declaration
	int res; // variable to store the return value

	fp = sum; // assign the function name to the function pointer
	res = fp(10, 20); // call the function through the function pointer
	printf("result : %d\n", res); // print the return value

	return 0;
}

int sum(int a, int b) // function definition
{
	return (a + b);
}