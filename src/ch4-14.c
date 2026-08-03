#include <Stdio.h>

int main(void)
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2; // same precedence, so evaluated left to right
	printf("res = %d\n", res);
	res = ++a * 3; // increment a by 1, then multiply by 3
	printf("res = %d\n", res);
	res = a > b && a != 5; // perform && on the result of a > b and the result of a != 5
	printf("res = %d\n", res);
	res = a % 3 == 0; // check whether a % 3 equals 0
	printf("res = %d\n", res);

	return 0;
}