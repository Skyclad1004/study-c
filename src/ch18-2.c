#include <stdio.h>

int main(void)
{
	FILE* fp; // declare a file pointer
	int ch; // variable to store the entered character

	fp = fopen("a.txt", "r"); // open the file as read-only
	if (fp == NULL) // check whether the file was opened
	{
		printf("File not opened\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp); // read a character from the opened file
		if (ch == EOF) // if the function's return value is EOF, end the input
		{
			break;
		}
		putchar(ch); // print the entered character on the screen
	}
	fclose(fp); // close the file

	return 0;
}