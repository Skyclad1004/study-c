#include <stdio.h>

void fruit(void); // function declaration

int main(void)
{
	fruit(); // call the function

	return 0;
}

void fruit(void) // definition of the recursive function
{
	printf("apple\n");
	fruit(); // call itself again
}