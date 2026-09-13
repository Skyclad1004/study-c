#include <stdio.h>

int main(void)
{
	FILE* fp;
	int ary[20] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
	int i, res;

	fp = fopen("a.txt", "wb"); // open as a binary file
	for (i = 0; i < 10; i++)
	{
		fputc(ary[i], fp); // print the ASCII character corresponding to each value of the array elements
	}
	fclose(fp); // close the file

	fp = fopen("a.txt", "rt"); // open the same file as a text file
	while (1)
	{
		res = fgetc(fp); // read a character from the file
		if (res == EOF) break;
		printf("%4d", res); // print the ASCII code value of the entered character
	}
	fclose(fp); // close the file

	return 0;
}