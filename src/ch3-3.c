#include <stdio.h>

int main(void)
{
	short sh = 32767; // initialize with the maximum value of short
	int in = 2147483647; // initialize with the maximum value of int
	long ln = 2147483647; // initialize with the maximum value of long
	long long lln = 123451234512345; // initialize with a very large value

	printf("short variable output : %d\n", sh);
	printf("int variable output : %d\n", in);
	printf("long variable output : %ld\n", ln);
	printf("long long variable output : %lld\n", lln); // print long long using lld

	return 0;
}