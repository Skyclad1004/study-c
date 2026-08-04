#include <stdio.h>

int main(void)
{
	int a = 1; // declare a variable and initialize it to 1 for multiplication

	while (a < 10) // a is less than 10, so the condition is true
	{
		a = a * 2; // multiply a by 2 and store the result back in a
	}
	printf("a : %d\n", a); // print the value of a

	return 0;
}