#include <stdio.h>

struct student // structure declaration
{
	int num; // int member
	double grade; // double member
}; // use a semicolon

int main(void)
{
	struct student s1; // declare a variable of type struct student

	s1.num = 2; // store 2 in s1's num member
	s1.grade = 2.7; // store 2.7 in s1's grade member
	printf("Student ID : %d\n", s1.num); // print the num member
	printf("Grade : %.1lf\n", s1.grade); // print the grade member

	return 0;
}