#include <stdio.h>

int main(void)
{
	char* dessert = "apple"; // initialize the pointer with a string

	printf("Today's dessert is %s\n", dessert); // print the string
	dessert = "banana"; // assign a new string
	printf("Tomorrow's dessert is %s\n", dessert); // print the changed string

	return 0;
}