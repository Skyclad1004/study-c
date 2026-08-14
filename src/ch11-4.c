#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++) // repeat three times
	{
		scanf("%c", &ch); // enter a character
		printf("%c", ch); // print the entered character
	}

	return 0;
}