#include <stdio.h>

void add_ten(int a); // function declaration

int main(void)
{
	int a = 10;

	add_ten(a); // pass a copy of the value of a
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a) // allocate independent storage separate from a on line 7
{
	a = a + 10; // add 10 to the parameter a on line 15
}