#include <stdio.h>

int main(void)
{
	char str[80] = "applejam"; // initialize the string

	printf("Initial string : %s\n", str); // print the initialized string
	printf("Enter a string : ");
	scanf("%s", str); // enter a new string
	printf("String after input : %s\n", str); // print the entered string

	return 0;
}