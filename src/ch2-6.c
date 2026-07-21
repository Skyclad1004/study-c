#include <stdio.h>

int main(void)
{
	printf("%.1lf\n", 1e6); // print a floating-point number in exponential form as decimal notation
	printf("%.7lf\n", 3.14e-5); // print up to 7 decimal places
	printf("%le\n", 0.0000314); // print a floating-point number in decimal form as exponential notation
	printf("%.2le\n", 0.0000314); // print up to 2 decimal places in exponential notation

	return 0;
}