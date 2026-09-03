#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[80]; // temporary char array
	char* str[3]; // array of pointers to connect to the dynamically allocated areas
	int i; // loop control variable

	for (i = 0; i < 3; i++)
	{
		printf("Enter a string : ");
		gets(temp); // enter a string
		str[i] = (char*)malloc(strlen(temp) + 1); // allocate storage for the string
		strcpy(str[i], temp); // copy the string into the dynamically allocated area
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]); // print the entered strings
    }

	for (i = 0; i < 3; i++)
	{
		free(str[i]); // return the dynamically allocated areas
	}

	return 0;
}