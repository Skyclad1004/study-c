#include <stdio.h>

int main(void)
{
	FILE* fp; // declare a file pointer
	char str[] = "banana"; // string to print
	int i; // loop control variable

	fp = fopen("b.txt", "w"); // open as write-only
	if (fp == NULL) // check whether the file was opened
	{
		printf("File not opened\n");
		return 1;
	}

	i = 0; // print starting from the first character of the char array
	while (str[i] != '\0') // if it is not a null character
	{
		fputc(str[i], fp); // print the character to the file
		i++; // move to the next character
	}
	fputc('\n', fp);
	fclose(fp); // close the file

	return 0;
}