#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile // declaration of the profile structure
{
	char name[20]; // array member to store the name
	int age; // age
	double height; //height
	char* intro; // pointer for self-introduction
};

int main(void)
{
	struct profile brian; // declare a variable of the profile structure

	strcpy(brian.name, "brian"); // copy the name into the name array member
	brian.age = 17; // store the age in the age member
	brian.height = 170.5; // store the height in the height member

	brian.intro = (char*)malloc(80); // dynamically allocate storage for the self-introduction
	printf("Self Introduction : "); 
	gets(brian.intro); // enter the self-introduction into the allocated storage

	printf("Name : %s\n", brian.name); // print each data of a member
	printf("Age : %d\n", brian.age);
	printf("Height : %.1lf\n", brian.height);
	printf("Self Introduction : %s\n", brian.intro);
	free(brian.intro); // return the dynamically allocated area

	return 0;
}