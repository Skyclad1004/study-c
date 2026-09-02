#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; // pointer to connect to the dynamically allocated area
	int i, sum = 0; // loop control variable and accumulator variable

	pi = (int*)malloc(5 * sizeof(int)); // allocate 20 bytes of storage
	if (pi == NULL)
	{
		printf("Memory allocation failed");
		exit(1);
	}
	printf("Enter ages of five people : ");
	for (i = 0; i < 5; i++) // i repeats five times, from 0 to 4
	{
		scanf("%d", &pi[i]); // input into the array element
		sum += pi[i]; // accumulate the value of the array element
	}
	printf("Average age : %.1lf\n", (sum / 5.0)); // print the average age
	free(pi); // return the allocated memory area

	return 0;
}