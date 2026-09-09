#include <stdio.h>

struct score // structure declaration
{
	int kor; // member to store the Korean score
	int eng; // English score
	int math; // math score
};

int main(void)
{
	struct score yuni = { 90, 80, 70 }; // declaration and initialization of a structure variable
	struct score* ps = &yuni; // store the address in a structure pointer

	printf("Korean : %d\n", (*ps).kor); // access the member through the structure pointer
	printf("English : %d\n", ps->eng); // use the -> operator
	printf("Mathmatics : %d\n", ps->math);

	return 0;
}