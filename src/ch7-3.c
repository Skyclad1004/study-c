#include <stdio.h>

void print_char(char ch, int count); // function declaration

int main(void)
{
	print_char('@', 5); // call the function, passing a character and a number

	return 0;
}

void print_char(char ch, int count) // has parameters but no return type
{
	int i;

	for (i = 0; i < count; i++) // i increases from 0 to count-1, repeating count times
	{
		printf("%c", ch); // print the character received in parameter ch
	}
	
	return;
}