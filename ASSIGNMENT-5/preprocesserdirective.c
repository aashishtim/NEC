// C program to illustrate the use of #define directive
#include <stdio.h>

#define PI 3.14159

int main()
{
	double radius = 8.0;
	double area = PI * radius * radius;

	// Displaying the calculated area
	printf("Area of the circle is: %f\n", area);

	return 0;
}
