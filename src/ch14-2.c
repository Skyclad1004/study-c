#include <stdio.h>

int main(void)
{
	int num[3][4] = { // declaration and initialization of a 2D array
		{1, 2, 3, 4}, // row 0 of num
		{5, 6, 7, 8}, // row 1 of num
		{9, 10, 11, 12} // row 2 of num
	};
	// same as int num[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]); // print the array elements
		}
		printf("\n"); // move to a new line after printing one row
	}

	return 0;
}