#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1); // first call, so pass 1 as the argument

	return 0;
}

void fruit(int count) // store the call count in the parameter
{
	printf("apple\n");
	if (count == 3) return; // if the call count is 3, return and end
    fruit(count + 1); // increase the call count by 1 for the next call
}