#include <stdio.h>

union student // union declaration
{
	int num; // member to store the student ID
	double grade; // member to store the grade
};

int main(void)
{
	union student s1 = { 315 }; // declaration and initialization of a union variable

	printf("Student ID : %d\n", s1.num); // print the student ID member
	s1.grade = 4.4; // assign a value to the grade member
	printf("Grade : %.1lf\n", s1.grade);
	printf("Student ID : %d\n", s1.num); // print the student ID again

	return 0;
}