#include <stdio.h>

int main(void)
{
	int score[5]; // declare an int array to store the scores of five subjects
	int i; // loop control variable
	int total = 0; // variable to accumulate the total score
	double avg; // variable to store the average

	for (i = 0; i < 5; i++) // i repeats five times, from 0 to 4
	{
		scanf("%d", &score[i]); // input the score into each array element
	}
	
	for (i = 0; i < 5; i++) 
	{
		total += score[i]; // accumulate the scores to calculate the total
	}
	avg = total / 5.0; // calculate the average

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]); // print the scores
	}
	printf("\n");

	printf("average value : %.1lf\n", avg); // print the average

	return 0;
}