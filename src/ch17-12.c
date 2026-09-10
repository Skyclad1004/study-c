#include <stdio.h>
struct student
{
	int num;
	double grade;
};
typedef struct student Student; // redefine as type Student
void print_data(Student* ps); // the parameter is a pointer of type Student

int main(void)
{
	Student s1 = { 315, 4.2 }; // declaration and initialization of a variable of type Student

	print_data(&s1); // pass the address of the Student variable

	return 0;
}

void print_data(Student* ps)
{
	printf("Student ID : %d\n", ps->num); // access the member through the Student pointer
	printf("Grade : %.1lf\n", ps->grade);
}