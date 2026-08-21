#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("Fruit name that comes later in the dictionary : ");
	if (strcmp(str1, str2) > 0) // if str1 is greater than str2 (comes later in the dictionary)
		printf("%s\n", str1); // print str1
	else // if str1 is not greater than str2
		printf("%s\n", str2); //print str2

	return 0;
}