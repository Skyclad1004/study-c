#include <stdio.h>

int get_num(void); // function declaration

int main(void)
{
	int result;

	result = get_num(); // call the function; the return value is stored in result
	printf("Return value : %d\n", result); // print the return value
    return 0;
}

int get_num(void) // no parameters, only a return type
{
	int num; // variable to store the keyboard input

	printf("Enter a positive number : "); // input prompt message
	scanf("%d", &num); // keyboard input

	return num; // return the entered value
}