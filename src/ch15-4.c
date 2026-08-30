#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  Value of ary : %u\t", ary); // value of the array name as an address
	printf("Address of ary : %u\n", &ary); // address of the array
	printf("       ary + 1 : %u\t", ary + 1);
	printf("      &ary + 1 : %u\n", &ary + 1);

	return 0;
}