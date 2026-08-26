#include <stdio.h>

int main(void)
{
	int ary1[4] = { 1, 2, 3, 4 }; // declaration and initialization of 1D arrays
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[4] = { 21, 22, 23, 24 };
	int* pary[3] = { ary1, ary2, ary3 }; // initialize the array of pointers with each array name
	int i, j; // loop control variable

	for (i = 0; i < 3; i++) // repeat 3 rows
	{
		for (j = 0; j < 4; j++) // repeat 4 columns
		{
			printf("%5d", pary[i][j]); // print like a 2D array
		}
		printf("\n"); // move to a new line after printing one row
	}

	return 0;
}