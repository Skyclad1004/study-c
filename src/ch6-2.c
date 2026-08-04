#include <stdio.h>

int main(void)
{
	int a = 1; // declare a variable and initialize it to 1
	int i; // variable to count the number of iterations

	for (i = 0; i < 3; i++)  // i is initialized to 0, and while i is less than 3 (i < 3)
	{                        // incrementing by 1 each time (i++)
		a = a * 2;           // execute the statement
	}
	printf("a : %d\n", a);   // after exiting the for loop, print the value of a

	return 0;
}