#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER}; // enum declaration

int main(void)
{
	enum season ss; // enum variable declaration
	char* pc = NULL; // pointer to store the string

	ss = SPRING; // assign the value of an enum member
	switch (ss) // determine the enum member
	{
	case SPRING: // if spring
		pc = "Hiking"; break; // select the string "Hiking"
	case SUMMER: // if summer
		pc = "Swimming"; break; // select the string "Swimming"
	case FALL: // if fall
		pc = "Traveling"; break; // select the string "Traveling"
	case WINTER: // if winter
		pc = "Skiing"; break; // select the string "Skiing"
	}
	printf("my leisure activity => %s\n", pc); // print the selected string

	return 0;
}