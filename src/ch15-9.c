#include <stdio.h>

int main(void)
{
	int a = 10; // int variable
	double b = 3.5; // double variable
	void* vp; // void pointer

	vp = &a; // store the address of the int variable
	printf("a : %d\n", *(int*)vp);

	vp = &b; // store the address of the double variable
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}