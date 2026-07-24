#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; // prefix increment operator
	post = (b++) * 3; // postfix increment operator

	printf("After increment, initial values a = %d, b = %d\n", a, b);
	printf("prefix: (++a) * 3 = %d, postfix: (b++) * 3 = %d\n", pre, post);

	return 0;
}