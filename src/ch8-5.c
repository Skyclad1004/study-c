#include <stdio.h>
#include <string.h> // header file containing the function prototypes for string-related functions

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger"); // copy "tiger" into the str1 array
	strcpy(str2, str1); // copy the string from str1 into the str2 array
	printf("%s, %s\n", str1, str2);

	return 0;
}