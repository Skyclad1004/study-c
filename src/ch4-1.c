#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10; // assignment operation(=)
	b = 20; // assignment operation(=)
	sum = a + b; // addition(+) then assignment(=)
	sub = a - b; // subtraction(-) then assignment(=)
	mul = a * b; // multiplication(*) then assignment(=)
	inv = -a; // negation(-) then assignment

	printf("value of a : %d, value of b : %d\n", a, b);
	printf("summation : %d\n", sum);
	printf("subtraction : %d\n", sub);
	printf("multiplication : %d\n", mul);
	printf("negation of a : %d\n", inv);

	return 0;
}