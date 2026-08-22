#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	printf("Values of a and b before exchange : %d, %d\n", a, b);
	{ // start of the block
		int temp; // declare the variable temp

		temp = a;
		a = b; // a and b are the variables declared on line 5
		b = temp;
	} // end of the block
	printf("Values of a and b after exchange : %d, %d\n", a, b);

	return 0;
}