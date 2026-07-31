#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("Size of an int variable : %d\n", sizeof(a));
	printf("Size of a double variable : %d\n", sizeof(b));
	printf("Size of an integer constant : %d\n", sizeof(10));
	printf("Size of the result of an expression : %d\n", sizeof(1.5 + 3.4));
	printf("Size of the char type : %d\n", sizeof(char));

	return 0;
}