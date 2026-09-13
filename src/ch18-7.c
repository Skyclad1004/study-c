#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	char str[20];

	fp = fopen("a.txt", "a+"); // open in appendable, readable mode
	if (fp == NULL) // check whether the file was opened
	{
		printf("File not opened\n");
		return 1;
	}

	while (1)
	{
		printf("Fruit : ");
		scanf("%s", str); // enter a fruit name from the keyboard
		if (strcmp(str, "end") == 0) // end when "end" is entered
		{
			break;
		}
		else if (strcmp(str, "list") == 0) // when "list" is entered, check the contents of the file
		{
			fseek(fp, 0, SEEK_SET); // move the buffer's position indicator to the very beginning
			while (1)
			{
				fgets(str, sizeof(str), fp); // read a fruit name
				if (feof(fp)) // end when all the contents of the file have been read
				{
					break;
				}
				printf("%s", str); // print the fruit name that was read to the screen
			}
		}
		else
		{
			fprintf(fp, "%s\n", str); // print the entered fruit name to the file
		}
	}
	fclose(fp);

	return 0;
}