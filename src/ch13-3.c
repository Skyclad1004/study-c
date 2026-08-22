#include <stdio.h>

void assign10(void);
void assign20(void);

int a; // declare a global variable

int main(void)
{
	printf("Value of a before function call : %d\n", a); // print the global variable a

	assign10();
	assign20();

	printf("Value of a after function call : %d\n", a); // print the global variable a

	return 0;
}

void assign10(void)
{
	a = 10; // assign 10 to the global variable a
}

void assign20(void)
{
	int a; // declare a local variable with the same name as the global variable

	a = 20; // assign 20 to the local variable a
}