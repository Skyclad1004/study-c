#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;       
	int* pi = &in;
	double* pd = &db;

	printf("Size of the address of a char variable : %d\n", sizeof(&ch));
	printf("Size of the address of a int variable : %d\n", sizeof(&in));
	printf("Size of the address of a double variable : %d\n", sizeof(&db));

	printf("Size of a char pointer : %d\n", sizeof(pc));
	printf("Size of a int pointer : %d\n", sizeof(pi));
	printf("Size of a double pointer : %d\n", sizeof(pd));

	printf("Size of the variable pointed to by the char pointer : %d\n", sizeof(*pc));
	printf("Size of the variable pointed to by the int pointer : %d\n", sizeof(*pi));
	printf("Size of the variable pointed to by the double pointer : %d\n", sizeof(*pd));

	return 0;
}