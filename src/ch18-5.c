#include <stdio.h>

int main(void)
{
	int ch; // variable to store the entered character

	while (1)
	{
		ch = fgetc(stdin); // enter a character from the keyboard
		if (ch == EOF) // end input with <Ctrl> + <Z>
		{
			break;
		}
		fputc(ch, stdout); // print the character to the screen
	}

	return 0;
}