#include <stdio.h>

int main(void)
{
	int i; // control variable to count the number of iterations
	int sum = 0; // variable to accumulate the sum from 1 to 10

	for (i = 1; i <= 10; i++) // i increases from 1 to 10, repeating 10 times
	{
		sum += i; // accumulate the value of i into sum
		if (sum > 30) break; // if the accumulated value exceeds 30, end the loop
	}
	printf("Accumulated value : %d\n", sum);
	printf("Last value added : %d\n", i);

	return 0;
}