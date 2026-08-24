#include <stdio.h>

int main(void)
{
	int score[3][4]; // declare a 2D array to store the scores of 4 subjects for 3 students
	int total; // total score
	double avg; // average
	int i, j; // loop control variable

	for (i = 0; i < 3; i++) // repeat for the number of students
	{
		printf("Enter scores of four subjects : "); // input prompt message
		for (j = 0; j < 4; j++) // repeat for the number of subjects
		{
			scanf("%d", &score[i][j]); // enter the score
		}
	}

	for (i = 0; i < 3; i++) // repeat for the number of students
	{
		total = 0; // reset to 0 each time the student changes
		for (j = 0; j < 4; j++) // repeat for the number of subjects
		{
			total += score[i][j]; // accumulate the total score for each student
		}
		avg = total / 4.0; // calculate the average
		printf("Total : %d, Average : %.2lf\n", total, avg); // print the total score and average
	}

	return 0;
}