#include <stdio.h>

void my_gets(char* str, int size);

int main(void)
{
	char str[7]; // array to store the string

	my_gets(str, sizeof(str)); // function to enter a single line of string
	printf("Entered string : %s\n", str); // print the entered string

	return 0;
}

void my_gets(char* str, int size) // str is a char array, size is the size of the array
{
	int ch; // variable to store the return value of the getchar function
	int i = 0; // index for the str array

	ch = getchar(); // enter the first character
	while ((ch != '\n') && (i < size - 1)) // enter up to the size of the array
	{
		str[i] = ch; // store the entered character in the array
		i++; // increase the index
		ch = getchar(); // enter a new character
	}
	str[i] = '\0'; // store a null character at the end of the entered string
}