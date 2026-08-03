#include <stdio.h>

int main(void)
{
	int a = 10;
	
	if (a >= 0)
	{
		a = 1; // if a is greater than or equal to 0, assign 1 to a
	}
	else
	{
		a = -1; // if a is less than 0, assign -1 to a
	}

	printf("a : %d\n", a);

	return 0;
}