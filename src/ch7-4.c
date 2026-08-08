#include <stdio.h>

void print_line(void); // function declaration

int main(void)
{
	print_line(); // call the function
	printf("202210366, Minjae Kim, C language, A+\n");
	print_line(); // call the function

	return 0;
}

void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)  // repeat 50 times to print '-'
	{
		printf("-");
	}
	printf("\n");
}