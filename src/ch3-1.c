#include <stdio.h>

int main(void)
{
	int a; // declare an int variable a
	int b, c; // declare two int variables b and c at the same time
	double da; // declare a double variable da
	char ch; // declare a char variable ch

	a = 10; // assign the integer 10 to the int variable a
	b = a; // assign the value of variable a to the int variable b
	c = a + 20; // assign the sum of variable a and the integer 20 to the int variable c
	da = 3.5; // assign the real number 3.5 to the double variable da
	ch = 'A'; // assign the character 'A' to the char variable ch

	printf("value of variable a : %d\n", a);
	printf("value of variable b : %d\n", b);
	printf("value of variable c : %d\n", c);
	printf("value of variable da : %.1lf\n", da);
	printf("value of variable ch : %c\n", ch);

	return 0;
}