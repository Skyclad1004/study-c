#include <stdio.h>

int main(void)
{
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt"); // open the output file in text mode
	fprintf(afp, "%d", num); // convert the value of num to characters and print it

	bfp = fopen("b.txt", "wb"); // open the output file in binary mode
	fwrite(&num, sizeof(num), 1, bfp); // print the value of num to the file as is
	
	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb"); // open the input file in binary mode
	fread(&res, sizeof(res), 1, bfp); // read the file's data into the variable as is
	printf("%d", res); // check the entered data

	fclose(bfp);

	return 0;
}