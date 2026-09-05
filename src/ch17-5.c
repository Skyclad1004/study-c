#include <stdio.h>

struct vision // structure to store the robot's vision
{
	double left; // left eye
	double right; // right eye
};

struct vision exchange(struct vision robot); // function that swaps the two vision values

int main(void)
{
	struct vision robot; // declaration of a structure variable

	printf("Enter vision values : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); // enter the vision values
	robot = exchange(robot); // call the swap function
	printf("Swapped vision values : %.1lf  %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) // function that returns a structure
{
	double temp; // temporary variable for the swap

	temp = robot.left; // swap the left and right vision values
	robot.left = robot.right;
	robot.right = temp;

	return robot; // return the structure variable
}