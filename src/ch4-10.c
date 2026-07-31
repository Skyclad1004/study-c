#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	a += 20; // add 20 to a and store the result back in a (+=)
	res *= b + 10; // add 10 to b, multiply by res, and store the result back in res (*=)

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;
}