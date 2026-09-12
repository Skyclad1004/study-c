#include <stdio.h>

int main(void)
{
	FILE* fp; // file pointer

	fp = fopen("a.txt", "r"); // open the file "a.txt" as read-only
	if (fp == NULL) // if fp is a null pointer, opening the file failed
	{
		printf("File not opened\n"); // print a notification message
		return 1; // terminate the program
	}
	printf("File opened\n");
	fclose(fp); // close the file

	return 0;
}