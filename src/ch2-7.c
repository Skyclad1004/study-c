#include <stdio.h>

int main(void)
{
	printf("%c\n", 'A'); // print a character constant
	printf("%s\n", "A"); // print a string constant
	printf("%c means %s", '1', "first"); // print a character (%c) and a string (%s) together

	return 0;
}