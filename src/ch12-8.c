#include <stdio.h>
#include <string.h> // include this to use the strcpy function

int main(void)
{
	char str1[80] = "strawberry"; // initialize the char array with a string
	char str2[80] = "apple"; // initialize the char array with a string
	char* ps1 = "banana"; // connect the pointer to a string constant
	char* ps2 = str2; // connect the pointer to an array

	printf("Initial string : %s\n", str1);
	strcpy(str1, str2); // copy the string from another char array
	printf("Altered string : %s\n", str1);

	strcpy(str1, ps1); // use the pointer connected to the string constant
	printf("Altered string : %s\n", str1);

	strcpy(str1, ps2); // use the pointer connected to the array
	printf("Altered string : %s\n", str1);

	strcpy(str1, "banana"); // use the string constant
	printf("Altered string : %s\n", str1);

	return 0;
}