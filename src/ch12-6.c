#include <stdio.h>

int main(void)
{
	int age; // variable to store the age
	char name[20]; // array to store the name

	printf("Enter your age : ");
	scanf("%d", &age); // enter the age using the scanf function

	printf("Enter your name : ");
	gets(name); // enter the name using the gets function
	printf("Age : %d, Name : %s", age, name);

	return 0;
}