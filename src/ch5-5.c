#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)  // if a is less than 0, but
	{
		if (b > 0) // b is greater than 0, print "ok"
		{
			printf("ok");
		}
	}
	else // if a is greater than or equal to 0, print "ok"
	{
		printf("ok");
	}

	return 0;
}