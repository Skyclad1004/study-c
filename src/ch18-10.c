#include <stdio.h>

int main(void)
{
	FILE* fp; // file pointer
	int age; // variable to store the age
	char name[20]; // array to store the name

	fp = fopen("a.txt", "r"); // open the file

	fscanf(fp, "%d", &age); // enter the age
	fgets(name, sizeof(name), fp); // enter the name

	printf("Age : %d, Name : %s", age, name); // print the entered data
	fclose(fp); // close the file

	return 0;
}