#include <stdio.h>

int main(void)
{
	char str[80];

	printf("Enter a string : ");
	scanf("%s", str); // use %s and give the array name
	printf("First word : %s\n", str); // print the string entered into the array
	scanf("%s", str);
	printf("Second word remaining in Buffer : %s\n", str); 

	return 0;
}