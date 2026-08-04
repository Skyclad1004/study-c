#include <stdio.h>

int main(void)
{
	int i, j; // control variable to count the number of iterations

	for (i = 0; i < 3; i++) // i increases from 0 to 2, repeating 3 times
	{
		for (j = 0; j < 5; j++) // j increases from 0 to 4, repeating 5 times
		{
			printf("*"); // print the star (*)
		}
		printf("\n"); // after printing 5 stars, move to a new line
	}

	return 0;
}