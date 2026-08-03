#include <stdio.h>

int main(void)
{
	int a = 20, b = 10;

	if (a > 10) // if a is greater than 10, execute lines 9-16; otherwise, jump to line 18
	{
		if (b >= 0) // if b is greater than or equal to 0, assign 1 to b and jump to line 18
		{
			b = 1;
		}
		else
		{
			b = -1; // if b is less than 0, assign -1 to b and jump to line 18
		}
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}