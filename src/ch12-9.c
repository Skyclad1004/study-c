#include <stdio.h>
#include <string.h> // include the header file to use the strncpy function

int main(void)
{
	char str[20] = "mango tree"; // initialize the array

	strncpy(str, "apple-pie", 5); // copy only 5 characters from "apple-pie"

	printf("%s\n", str); // print the copied string

	return 0;
}