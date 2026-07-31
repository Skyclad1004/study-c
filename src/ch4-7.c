#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b; // the result of the operation is discarded
	printf("%d + %d = %d\n", a, b, a + b); // the result is used directly in the output

	res = a + b; // the result is stored in a variable
	printf("%d + %d = %d\n", a, b, res); // the stored value is used repeatedly

	return 0;
}