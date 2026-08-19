#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice"; // initialize the array with a string
	char* ps = "banana"; // concatenate the string to the pointer

	puts(str); // print "apple juice" and move to a new line
	fputs(ps, stdout); // print only "banana"
	puts("milk"); // print "milk" following "banana"

	return 0;
}