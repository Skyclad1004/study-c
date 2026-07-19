#include <stdio.h>

int main(void)
{
	printf("Be happy\n"); // print "Be happy" and go to a new line (\n)
	printf("12345678901234567890\n"); // print the column number and go to a new line(\n)
	printf("My\tfriend\n");
	// print "My", insert a tab (\t), print "friend", go to a new line (\n)
	printf("Goot\bd\tchance\n");
	// change 't' to 'd', insert a tab (\t), print "chance", go to a new line (\n)
	printf("Cow\rW\a\n");
	// return to line start (\r), change 'C' to 'W', beep (\a), go to a new line (\n)

	return 0;
}