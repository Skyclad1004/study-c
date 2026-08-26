#include <stdio.h>

int main(void)
{
	int a = 10; // declaration and initialization of an int variable
	int* pi; // pointer declaration
	int** ppi; // double pointer declaration

	pi = &a; // pointer storing the address of the int variable
	ppi = &pi; // double pointer storing the address of the pointer

	printf("-------------------------------------------------------------------\n");
	printf("Variable     Value     &Operation        *Operation      **Operation\n");
	printf("-------------------------------------------------------------------\n");
	printf("   a%12d%12u\n", a, &a);
	printf("  pi%12u%12u%12d\n", pi, &pi, *pi);
	printf("ppi%12u%12u%12u%12u\n", ppi, &ppi, *ppi, **ppi);
	printf("-------------------------------------------------------------------\n");

	return 0;
}