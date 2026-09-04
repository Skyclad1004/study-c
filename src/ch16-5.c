#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps); // function that prints the strings in the dynamically allocated areas

int main(void)
{
	char temp[80]; // temporary char array
	char* str[21] = { 0 }; // array of pointers to connect to the strings, initialized to null pointers
	int i = 0; // loop control variable

	while (i < 20) // allow up to 20 entries
	{
		printf("Enter a string : ");
		gets(temp); // enter a string
		if (strcmp(temp, "end") == 0) break; // end the loop when "end" is entered
		str[i] = (char*)malloc(strlen(temp) + 1); // allocate storage for the string
		strcpy(str[i], temp); // copy the string into the dynamically allocated area
		i++;
	}
	print_str(str); // print the entered strings

	for (i = 0; str[i] != NULL; i++) // until there is no string connected to str
	{
		free(str[i]); // return the dynamically allocated areas
	}
}

void print_str(char** ps) // double pointer declaration
{
	while (*ps != NULL) // repeat while the value of the pointer array is not a null pointer
	{
		printf("%s\n", *ps); // what ps points to is an element of the pointer array
		ps++; // ps points to the next array element
	}
}