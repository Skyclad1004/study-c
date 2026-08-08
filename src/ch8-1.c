#include <stdio.h>

int main(void)
{
	int ary[5]; // declare an array of 5 int elements
	            // ary is short for array
	ary[0] = 10; // assign 10 to the first array element
	ary[1] = 20; // assign 20 to the second array element
	ary[2] = ary[0] + ary[1]; // add the first and second elements and store the result in the third element
	scanf("%d", &ary[3]); // take keyboard input and store it in the fourth element

	printf("%d\n", ary[2]); // print the third array element
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]); // the last array element is a garbage value

	return 0;
}