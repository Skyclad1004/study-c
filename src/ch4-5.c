#include <Stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10; // assign values to a, b, c
	int res; // variable to store the result

	res = (a > b); // 10 > 20 is false, so the result is 0
	printf("a > b : %d\n", res);
	res = (a >= b); // 10 >= 20 is false, so the result is 0
	printf("a >= b : %d\n", res);
	res = (a < b); // 10 < 20 is true, so the result is 1
	printf("a < b : %d\n", res);
	res = (a <= b); // 10 <= 20 is true, so the result is 1
	printf("a <= b : %d\n", res);
	res = (a <= c); // 10 <= 10 is true, so the result is 1
	printf("a <= c : %d\n", res);
	res = (a == b); // 10 == 20 is false, so the result is 0
	printf("a == b : %d\n", res);
	res = (a != c); // 10 != 10 is false, so the result is 0
	printf("a != c : %d\n", res);

	return 0;
}