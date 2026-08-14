#include <stdio.h>

int main(void)
{
	char small, cap = 'G'; // declare and initialize a char variable

	if ((cap >= 'A') && (cap <= 'Z')) // if it is in the uppercase range
	{
		small = cap + ('a' - 'A'); // add the difference between uppercase and lowercase to convert to lowercase
	}
	printf("Uppercase : %c %c", cap, '\n'); // printing '\n' with %c moves to a new line
	printf("Lowercase : %c", small);

	return 0;
}