#include <stdio.h>

int main(void)
{
	char fruit[20] = "strawberry"; // declare a char array and initialize it with a string

	printf("딸기 : %s\n", fruit); // print the string stored in it using the array name
	printf("딸기쨈 : %s %s\n", fruit, "jam"); // print a string constant directly with %s

	return 0;
}