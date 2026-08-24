#include <stdio.h>

int main(void)
{
	char animal1[5][10] = { // initialize one character at a time with character constants
		{'d', 'o', 'g', '\0'},
		{'t', 'i', 'g', 'e', 'r', '\0'},
		{'r', 'a', 'b', 'b', 'i', 't', '\0'},
		{'h', 'o', 'r', 's', 'e', '\0'},
		{'c', 'a', 't', '\0'}
	};

	char animal2[][10] = { "dog", "tiger", "rabbit", "horse", "cat" }; // initialize one row at a time with string constants; the number of rows can be omitted
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal2[i]);
	}

	return 0;
}
