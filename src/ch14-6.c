#include <stdio.h>

int main(void)
{
	char* pary[5]; // declare an array of pointers; pary is short for pointer and array
	int i; // loop control variable

	pary[0] = "dog"; // assign strings to the array elements
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++) // i repeats five times, from 0 to 4
	{
		printf("%s\n", pary[i]); // print all strings using the array elements
	}

	return 0;
}