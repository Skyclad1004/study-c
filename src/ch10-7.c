#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max; // variable to store the maximum value
	int size = sizeof(ary) / sizeof(ary[0]); // calculate the number of array elements

	input_ary(ary, size); // enter values into the array
    max = find_max(ary, size); // return the maximum value of the array
	printf("Maximum value of the array : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size) // declare a double pointer as a parameter
{
	int i;

	printf("Enter %d real numbers : ", size);
	for (i = 0; i < size; i++) // determine the number of iterations based on the value of size
	{
		scanf("%lf", pa + i); // &pa[i] also works; pass the address of the array element to store the input in
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0]; // set the value of the first array element as the maximum
    for (i = 1; i < size; i++) // compare with max starting from the second array element
	{
		if (pa[i] > max) max = pa[i]; // if the new array element's value is greater than max, assign it
	}

	return max; // return the maximum value
}