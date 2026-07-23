#include <stdio.h>

int main(void)
{
	int income = 0; // initialize the income
	double tax; // tax
	const double tax_rate = 0.12; // initialize the tax rate

	income = 456; // store the income
	tax = income * tax_rate; // calculate the tax
	printf("your tax is %.1lf\n", tax);

	return 0;
}