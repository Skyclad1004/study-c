#include <stdio.h>

int main(void)
{
	char ch1 = 'A'; // initialize with a character; the stored value is the character's ASCII code
	char ch2 = 65; // initialize with the integer corresponding to the ASCII code of the character 'A'

	printf("ASCII code of character %c : %d\n", ch1, ch1);
	printf("Character with ASCII code %d : %c\n", ch2, ch2);

	return 0;
}