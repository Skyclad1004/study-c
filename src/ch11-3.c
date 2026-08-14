#include <stdio.h>

int main(void)
{
	int ch; // variable to store the input character

	ch = getchar(); // directly store the character returned by the function
	printf(" Entered Character : ");
	putchar(ch); // print the entered character
	putchar('\n'); // print a newline character

	return 0;
}