#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; // the larger of a and b is stored in res
	printf("THe greater value : %d\n", res);

	return 0;
}