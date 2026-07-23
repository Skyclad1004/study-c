#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789; // initialize with a value that has many significant digits
	double db = 1.234567890123456789; // print up to 20 decimal places

	printf("Value of the float variable : %.20f\n", ft);
	printf("Value of the double variable : %.20lf\n", db);

	return 0;
}