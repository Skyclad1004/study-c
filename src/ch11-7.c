#include <stdio.h>

int main(void)
{
	int num, grade; // variables to store the student ID and grade

	printf("Enter your ID : ");
	scanf("%d", &num); // enter the student ID
	getchar(); // remove the newline character remaining in the buffer
	printf("Enter your grade : ");
	grade = getchar(); // enter the grade
	printf("Student ID : %d, Grade : %c", num, grade);

	return 0;
}