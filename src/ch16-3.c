#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; // pointer connected to the allocated storage
	int size = 5; // size of storage to allocate at a time, 5 int variables at a time
	int count = 0; // current number of positive numbers entered
	int num; // variable to enter a positive number
	int i; // loop control variable

	pi = (int*)calloc(size, sizeof(int)); // first, allocate storage for 5 elements
	while (1)
	{
		printf("Enter a positive integer only : ");
		scanf("%d", &num); // enter data
		if (num <= 0) break; // if 0 or negative, end
		if (count == size) // if all the storage has been used
		{
			size += 5; // increase the size and reallocate
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]); // print the entered data
	}
	free(pi); // return the dynamically allocated storage

	return 0;
}