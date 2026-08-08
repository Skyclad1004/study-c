#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count; // variable to store the number of array elements

	count = sizeof(score) / sizeof(score[0]); // calculate the number of array elements

	for (i = 0; i < count; i++) // repeat count times, as calculated on line 11
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++) // repeat count times, as calculated on line 11
	{
		total += score[i];
	}
	avg = total / (double)count; // calculate the average by dividing the total by count

	for (i = 0; i < count; i++) // repeat count times, as calculated on line 11
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("average value : %.1lf\n", avg);

	return 0;
}