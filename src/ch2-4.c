#include <stdio.h>

int main(void)
{
	printf("%d\n", 10); // print 10 at the %d position
	printf("%lf\n", 3.4); // print 3.4 at the %lf position, up to 6 decimal places
	printf("%.1lf\n", 3.45); // print up to 1 decimal place (rounded to the nearest tenth)
	printf("%.10lf\n", 3.4); // print up to 10 decimal places

	printf("sum of %d and %d is %d.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}