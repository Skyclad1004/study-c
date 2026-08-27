#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main(void)
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb); // print the string before swapping
	swap_ptr(&pa, &pb); // call the function
	printf("pa -> %s, pb -> %s\n", pa, pb); // print the string after swapping

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}