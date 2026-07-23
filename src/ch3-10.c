#include <stdio.h>

int main(void)
{
	int age; //age is an integer type
	double height; //height is a floating-point type

	printf("enter your age and height : "); // print an input prompt message
	scanf("%d%lf", &age, &height); // enter age and height together
	printf("your age is %d and your height is %.1lfcm\n", age, height); // print the entered values

	return 0;
}