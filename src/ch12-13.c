#include <stdio.h>

char* my_strcpy(char* pd, char* ps); // function declaration

int main(void)
{
	char str[80] = "strawberry";

	printf("String before change : %s\n", str);
	my_strcpy(str, "apple"); // copy the string "apple"
	printf("String after change : %s\n", str);
	printf("Assigning a different string : %s\n", my_strcpy(str, "kiwi")); // print using the return value

	return 0;
}

char* my_strcpy(char* pd, char* ps) // pointers to the destination (pd) and the source (ps)
{
	char* po = pd; // keep the value of pd to return it later

	while (*ps != '\0') // while the character pointed to by ps is not a null character
	{
		*pd = *ps; // assign the character pointed to by ps to the location pointed to by pd
		pd++; // increment the pointer to the next location to copy into
		ps++; // increment the pointer to the next character to copy
	}
	*pd = '\0'; // once copying is finished, terminate the destination with a null character

	return po; // return the starting address of the storage where the copy was made
}