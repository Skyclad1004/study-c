#include <stdio.h>

int main(void)
{
	char animal[5][20]; // declare a 2D char array
	int i; // loop control variable
	int count; // variable to store the number of rows

	count = sizeof(animal) / sizeof(animal[0]); // calculate the number of rows
	for (i = 0; i < count; i++) // repeat for the number of rows
	{
		scanf("%s", animal[i]); // enter a string
	}

	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]); // print the entered string
	}

	return 0;
}