#include <stdio.h>
#include <string.h> // include the header file to use the strcat and strncat functions

int main(void)
{
	char str[80] = "straw"; // initialize the string

	strcat(str, "berry"); // append a string to the str array
	printf("%s\n", str);
	strncat(str, "piece", 3); // append 3 characters to the str array
	printf("%s\n", str);

	return 0;
}