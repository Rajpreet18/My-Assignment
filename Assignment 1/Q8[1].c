// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-8:WAP for the area of a circle.

#include<stdio.h>
#include<math.h>

int main () {
	double radius;
	const double PI = 3.14159;
	printf("Enter the radius: ");
	scanf("%lf", &radius);
	double area = PI * pow(radius, 2);
	printf("Area of the circle is: %.2lf", area);
	return 0; 
}
