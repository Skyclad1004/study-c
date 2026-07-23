#include <stdio.h>
#include <string.h> // include the string.h header file, which provides string-handling functions

int main(void)
{
	char fruit[20] = "strawberry"; // initialize with "strawberry"

	printf("%s\n", fruit); // print "strawberry"
	strcpy(fruit, "banana"); // copy "banana" into fruit
	printf("%s\n", fruit); // print "banana"

	return 0;
}