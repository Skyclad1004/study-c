#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* ifp, * ofp; // declare file pointers
	char str[80]; // array to store the entered string
	char* res; // variable to store the return value of the fgets function

	ifp = fopen("a.txt", "r"); // open the input file as read-only
	if (ifp == NULL) // check whether it was opened
	{
		printf("Input file not opened");
		return 1;
	}

	ofp = fopen("b.txt", "w"); // open the output file as write-only
	if (ofp == NULL) // check whether it was opened
	{
		printf("Output file not opened");
		return 1;
	}

	while (1) // repeat the process of entering and printing the string
	{
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL) // end the loop if the return value is a null pointer
		{
			break;
		}
		str[strlen(str) - 1] = '\0'; // remove the newline character
		fputs(str, ofp);
	}

	fclose(ifp); // close the input file
	fclose(ofp); // close the output file

	return 0;
}