#include <stdio.h>

void print_str(char** pps, int cnt);

int main(void)
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // initialization
	int count; // variable to store the number of array elements

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); // calculate the number of array elements
	print_str(ptr_ary, count); // call by giving the array name and the number of array elements

	return 0;
}

void print_str(char** pps, int cnt) // use a double pointer as a parameter
{
	int i;

	for (i = 0; i < cnt; i++) // repeat for the number of array elements
	{
		printf("%s\n", pps[i]); // use the double pointer like an array name
	}
}