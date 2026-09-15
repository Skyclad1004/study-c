#include <stdio.h>

int main(void)
{
	FILE* ifp, * ofp; // declare file pointers
	char name[20]; // name
	int kor, eng, math; // scores of three subjects
	int total; // total score
	double avg; // average
	int res; // store the return value of the fscanf function

	ifp = fopen("a.txt", "r"); // open the input file as read-only
	if (ifp == NULL) // check whether it was opened
	{
		printf("Input file not opened");
		return 1;
	}

	ofp = fopen("b.txt", "w"); // open the output file as write-only
	if (ofp == NULL) // check whether it was opened
	{
		printf("Output file not opened");
		return 1;
	}

	while (1)
	{
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math); // enter the data
		if (res == EOF) // EOF is returned once all the data in the file has been read
		{
			break;
		}
		total = kor + eng + math; // calculate the total score
		avg = total / 3.0; // calculate the average
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg); // print the name, total score, and average
	}

	fclose(ifp); // close the input file
	fclose(ofp); // close the output file

	return 0;
}