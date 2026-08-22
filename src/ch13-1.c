#include <stdio.h>

void assign(void); // function declaration

int main(void)
{
	auto int a = 0; // declare and initialize a local variable; auto can be omitted

	assign(); // call the function
	printf("a in the main function : %d\n", a);

	return 0;
}

void assign(void)
{
	int a; // a local variable with the same name as the variable in the main function; auto omitted

	a = 10; // assign to a declared inside the assign function
	printf("a in the assign function : %d\n", a); // print the value of a declared in the assign function
}