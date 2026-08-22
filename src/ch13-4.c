#include <stdio.h>

void auto_func(void); // declaration of the auto_func function
void static_func(void); // declaration of the static_func function

int main(void)
{
	int i;

	printf("Function using a regular local variable (auto)...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("Function using a static local variable (static)...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0; // declare and initialize a local variable

	a++; // increase the value of a by 1
	printf("%d\n", a); // print a
}

void static_func(void)
{
	static int a; // declare a static local variable

	a++; // increase the value of a by 1
	printf("%d\n", a); // print a
}