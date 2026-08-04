#include <stdio.h>

int main(void)
{
	int a = 1; // declare a variable and initialize it to 1

	do // start of the loop
	{
		a = a * 2; // double the value of a
	} while (a < 10); // if a is less than 10, repeat line 9
	printf("a : %d\n", a); // after the loop ends, print the value of a

	return 0;
}