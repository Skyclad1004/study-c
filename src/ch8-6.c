#include <stdio.h>

int main(void)
{
	char str[80];

	printf("Enter a string : "); // print an input prompt message
	gets(str); // enter a string that includes spaces
	puts("Entered string : "); // print a string constant
	puts(str); // print the string stored in the array

	return 0;
}