#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary; // address of the first array element
	int* pb = pa + 3; // address of the fourth array element

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++; // move pa to the next array element
	printf("pb - pa : %u\n", pb - pa); // subtraction of the two pointers

	printf("Value of the preceding array element : ");
	if (pa < pb) printf("%d\n", *pa); // if pa comes before pb, print *pa
	else printf("%d\n", *pb); // if pb comes before pa, print *pb

	return 0;
}