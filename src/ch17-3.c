#include <stdio.h>

struct profile // declaration of the profile structure
{
	int age; // age
	double height; // height
};

struct student
{
	struct profile pf; // use the profile structure as a member
	int id; // member to store the student ID
	double grade; // member to store the grade
};

int main(void)
{
	struct student brian; // declare a variable of the student structure

	brian.pf.age = 17; // store the age in the age member of the pf member
	brian.pf.height = 170.5; // store the height in the height member of the pf member
	brian.id = 315; 
	brian.grade = 4.3;

	printf("Age : %d\n", brian.pf.age); // print the age member of the pf member
	printf("Height : %.1lf\n", brian.pf.height); // print the height member of the pf member
	printf("ID : %d\n", brian.id); // print the id member
	printf("Grade : %.1lf\n", brian.grade); // print the grade member

	return 0;
}