#include <stdio.h>

int main(void)
{
	char grade; // variable to store the grade
	char name[20]; // array to store the name

	printf("enter your grade : ");
	scanf("%c", &grade); // enter the grade character into the variable grade
	printf("enter your name : ");
	scanf("%s", name); // enter the name string into the array name; do not use &
	printf("%s's grade is %c\n", name, grade);

	return 0;
}