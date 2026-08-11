#include <stdio.h>

int main(void)
{
	int a; // declare an int variable
	double b; // declare a double variable
	char c; // declare a char variable

	printf("Address of the int variable : %u\n", &a); // calculate the address using the address operator
	printf("Address of the double variable : %u\n", &b);
	printf("Address of the char variable : %u\n", &c);

	return 0;
}