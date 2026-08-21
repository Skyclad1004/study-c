#include <stdio.h>
#include <string.h>v// include the header file to use the strlen function
int main(void)
{
	char str1[80], str2[80]; // arrays to enter two strings
	char* resp; // pointer to select the array with the longer string

	printf("Enter two fruits : ");
	scanf("%s%s", str1, str2); // enter 2 strings
	if (strlen(str1) > strlen(str2)) // compare the lengths of the strings entered into the arrays
		resp = str1; // select the first array if it is longer
	else
		resp = str2; // select the second array if it is longer
	printf("the fruit of the longer name : %s\n", resp); // print the string in the selected array

	return 0;
}