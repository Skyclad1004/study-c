#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank) // check the value of rank
	{
	case 1:// if rank is 1,
		m = 300; // execute m = 300, then
		break; // exit the block and jump to line 22
	case 2: // if rank is 2,
		m = 200; // execute m = 200, then
		break; // exit the block and jump to line 22
	case 3: // if rank is 3,
		m = 100; // execute m = 100, then
		break; // exit the block and jump to line 22
	default: // if no case matches rank,
		m = 10; // execute m = 10, then
		break; // exit the block and jump to line 22
}

	printf("m : %d\n", m);

	return 0;
}