#include <stdio.h>

struct address // structure declaration for creating the address book
{
	char name[20]; // member to store the name
	int age; // member to store the age
	char tel[20]; // member to store the phone number
	char addr[80]; // member to store the address
};

void print_list(struct address* lp);

int main(void)
{
	struct address list[5] = { // declaration of a structure array with 5 elements
		{"Eren Jägder", 15, "111-1111", "German"},
		{"Mikasa Ackerman", 15, "222-2222", "English"},
		{"Armin Arlert", 15, "333-3333", "English"},
		{"Levi Ackerman", 30, "444-4444", "French"},
		{"Erwin Smith", 40, "555-5555", "English"}
	};

	print_list(list);

	return 0;
}

void print_list(struct address* lp) // the parameter is a structure pointer
{
	int i; // loop control variable

	for (i = 0; i < 5; i++) // repeat for the number of array elements
	{
		printf("%10s%5d%15s%20s\n", // print the members of each array element
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}