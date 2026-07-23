#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295; // store a large positive value
	printf("%d\n", a); // print with %d
	a = -1; // store a negative value
	printf("%u\n", a); // print with %u

	return 0;
}