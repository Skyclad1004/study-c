#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20); // true if both the left and right operands are true
	printf("(a > 10) && (a < 20) : %d\n", res);
	res = (a < 10) || (a > 20); // true if either the left or right operand is true
	printf("(a < 10) || (a > 20) : %d\n", res);
	res = !(a >= 30); // false becomes true, true becomes false
	printf("! (a >= 30) : %d\n", res);

	return 0;
}