#include <stdio.h>

int main(void)
{
	char str[80];

	printf("Enter a string that includes spaces : ");
	gets(str); // give the array name and call the function
	printf("The entered string is %s", str);

	return 0;
}