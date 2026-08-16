#include <stdio.h>

int main(void)
{
	char str[80];

	printf("Enter a string that includes spaces : ");
	fgets(str, sizeof(str), stdin); // enter a string

	printf("Entered string is %s\n", str); // print the string

	return 0;
}