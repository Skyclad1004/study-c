#include <stdio.h>

int main(void)
{
	register int i; // register variable
	auto int sum = 0; // auto local variable

	for (i = 1; i <= 10000; i++) // i is used repeatedly during the iteration
	{
		sum += i; // repeatedly accumulate the value of i
	}

	printf("%d\n", sum);

	return 0;
}