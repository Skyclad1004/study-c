#include <stdio.h>

int main(void)
{
	int ary[3]; // declare an array
	int* pa = ary; // store the array name in a pointer
	int i; // loop control variable

	*pa = 10; // assign 10 to the first array element
	*(pa + 1) = 20; // assign 20 to the second array element
	pa[2] = pa[0] + pa[1]; // use brackets to treat pa like an array name

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]); // print all array elements through the pointer
	}

	return 0;
}