#include <stdio.h>

int main(void)
{
	double apple; // a floating-point number
	int banana; // an integer
	int orange; // an integer

	apple = 5.0 / 2.0; // division of a float by a float (/)
	banana = 5 / 2; // division of an int by an int (/)
	orange = 5 % 2; // remainder of two ints (%)

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}