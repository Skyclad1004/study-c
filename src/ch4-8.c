#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); // convert the values of a and b to double using (double)
	printf("a = %d, b = %d\n", a, b);
	printf("result of a / b : %.1lf\n", res);

	a = (int)res; // extract only the integer part of res using (int)
	printf("result of (int) %.1lf : %d\n", res, a);

	return 0;
}