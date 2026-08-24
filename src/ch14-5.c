#include <stdio.h>

int main(void)
{
	int score[2][3][4] = { // store the scores of 4 subjects for 3 students in 2 classes
		{ { 72, 80, 95, 60 }, { 68, 98, 83, 90 }, { 75, 72, 84, 90 } },
		{ { 66, 85, 90, 88 }, { 95, 92, 88, 95 }, { 43, 72, 56, 75 } }
	};

	int i, j, k; // loop control variable

	for (i = 0; i < 2; i++) // repeat for the number of classes
	{
		printf("Class %d scores...\n", i + 1); // print when the class changes
		for (j = 0; j < 3; j++) // repeat for the number of students
		{
			for (k = 0; k < 4; k++) // repeat for the number of subjects
			{
				printf("%5d", score[i][j][k]); // print the score
			}
			printf("\n"); // print one student's scores and move to a new line
		}
		printf("\n"); // print one class's scores and move to a new line
	}

	return 0;
}