#include <stdio.h>

int main(void)
{
	int res; // variable to store the return value of the scanf function
	char ch; // variable to store the input character

	while (1)
	{
		res = scanf("%c", &ch); // enter a character; pressing <Ctrl> + <Z> returns -1
		if (res == -1) break; // if the return value is -1, end the loop
		printf("%d ", ch); // print the ASCII code of the entered character
	}

	return 0;
}