// C program to illustrate the use of #define directive
#include <stdio.h>

// Defining a macro for PI
#define PI 3.14159

int main()
{
	// Using the PI macro to calculate
	double radius = 8.0;
	double area = PI * radius * radius;

	// Displaying the calculated area
	printf("Area of the circle is: %f\n", area);

	return 0;
}
