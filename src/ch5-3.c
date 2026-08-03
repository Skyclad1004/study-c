#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	if (a > 0) // condition 1: if a is greater than 0, assign 1 to b
	{
		b = 1;
	}
	else if (a == 0) // condition 2: if a is not greater than 0 and a is 0, assign 2 to b
	{
		b = 2;
    }
	else // if a is not greater than 0 and not 0 either, assign 3 to b
	{
		b = 3;
	}

	printf("b : %d\n", b); // print the value of b determined by the if statement
    
	return 0;
}