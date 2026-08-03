#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res;

		res = (++a, ++b); // the operations are performed in sequence, so
	                      // the value stored in res is the incremented value of b
	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);

	return 0;
}