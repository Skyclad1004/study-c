#include <stdio.h>

void func(int (*fp)(int, int)); // function that takes a function pointer as a parameter
int sum(int a, int b); // function that adds two integers
int mul(int a, int b); // function that multiplies two integers
int max(int a, int b); // function that finds the larger of two integers

int main(void)
{
	int sel; // variable to store the selected menu number

	printf("01 Addition of two integers\n"); // print the menu
	printf("02 Multiplication of two integers\n");
	printf("03 Find the larger value between two integers\n");
	printf("Choose the operation you want");
	scanf("%d", &sel); // enter the menu number

	switch (sel)
	{
	case 1: func(sum); break; // if 1, assign the addition function to func
	case 2: func(mul); break; // if 2, assign the multiplication function to func
	case 3: func(max); break; // if 3, assign the function that finds the larger value to func
	}

	return 0;
}

void func(int (*fp)(int, int))
{
	int a, b; // variables to store the two integers
	int res; // variable to store the return value of the function

	printf("Enter two integers : ");
	scanf("%d%d", &a, &b); // enter the two integers
	res = fp(a, b); // call the function pointed to by the function pointer
	printf("Result : %d\n", res); // print the return value
}

int sum(int a, int b) // addition function
{
	return (a + b);
}

int mul(int a, int b) // multiplication function
{
	return(a * b);
}

int max(int a, int b) // function that finds the larger value
{
	if (a > b) return a;
	else return b;
}