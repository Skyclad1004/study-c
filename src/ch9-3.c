#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total; // declare and initialize variables
	double avg; // variable to store the average
	int* pa, * pb; // declare two pointers at the same time
	int* pt = &total; // declare and initialize a pointer
	double* pg = &avg; // declare and initialize a double pointer

	pa = &a; // assign the address of variable a to pointer pa
	pb = &b; // assign the address of variable b to pointer pb

	*pt = *pa + *pb; // add the values of a and b and store the result in total
	*pg = *pt / 2.0; // divide total by 2 and store the result in avg

	printf("Values of the two integers : %d, %d\n", *pa, *pb); // print the values of a and b
	printf("Sum of the two integers : %d\n", *pt); // print the value of total
	printf("Average of the two integers : %.1lf\n", *pg); // print the value of avg

	return 0;
}