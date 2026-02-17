#include <stdio.h>
#include <math.h>

// this is a program designed to calculate a circle's 
// area, a sphere's surface area and volume, for the
// radius which is given by the user.

int main()
{
	double radius = 0.0;
	double area = 0.0;
	double surfaceArea = 0.0;
	double volume = 0.0;
	const double PI = 3.14159;
	
	printf("Welcome to the Circle/Sphere calculator program!\n");
	printf("Enter a radius: ");
	scanf("%lf", &radius);

	printf("Given radius is %lf\n", radius);

	area = 2*PI*pow(2, radius);

	surfaceArea = 4*PI*pow(radius, 2);

	volume = (4.0/3.0)*PI*pow(radius, 3);

	printf("Area of a circle of given radius is: %.2lf units\n", area);
	printf("Surface area of a sphere of given radius is: %.2lf units\n", surfaceArea);
	printf("Volume of a sphere of given radius is: %.2lf units\n", volume);
	printf("Thank you for running the program!");

	return 0;
}

