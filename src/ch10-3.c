#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("Values of Elements : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa); // print the array element pointed to by pa
		pa++; // increase pa to point to the next array element
	}

	return 0;
}