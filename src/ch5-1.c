#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10) // condition: a is greater than 10, so the condition is true
	{
		b = a; // statement: execute the assignment b = a
	}
	 
	printf("a : %d, b : %d\n", a, b); // once the assignment is executed, the two values are equal

	return 0;
}