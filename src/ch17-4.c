#include <stdio.h>

struct student // declaration of the student structure
{
	int id; // student ID
	char name[20]; // name
	double grade; // grade
};

int main(void)
{
	struct student s1 = { 315, "Mary", 2.4 }, // declaration and initialization of structure variables
		           s2 = { 316, "Brian", 3.7 },
		           s3 = { 317, "Jin", 4.4 };

	struct student max; // structure variable to store the highest grade

	max = s1; // assume s1 has the highest grade
	if (s2.grade > max.grade) max = s2; // if s2 is higher, assign it to max
	if (s3.grade > max.grade) max = s3; // if s3 is higher, assign it to max

	printf("ID : %d\n", max.id); // print the student ID of the student with the highest grade
	printf("Name : %s\n", max.name); // print the name of the student with the highest grade
	printf("Grade : %.1lf\n", max.grade); // print the grade of the student with the highest grade

	return 0;
}