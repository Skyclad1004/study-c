#include <stdio.h>

int main(void)
{
	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int (*pa)[4]; // array pointer pointing to an array of 4 int variables
	int i, j;

	pa = ary;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]); // use pa like a 2D array
		}
		printf("\n");
	}

	return 0;
}