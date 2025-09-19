// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-2:WAP to find roots of a quadratic equation (for D>=0 case).

#include<stdio.h>
#include<math.h>

int main () {
	float a, b, c;
	printf("Enter the coefficient of x^2: ");
	scanf("%f", &a);
	printf("Enter the coefficient of x(if any): ");
	scanf("%f", &b);
	printf("Enter the constant: ");
	scanf("%f", &c);
	float d = pow(b, 2) - 4*a*c;
	if(d>=0){
		float x1 = (-b + pow(d, 0.5))/(2*a);
		float x2 = (-b - pow(d, 0.5))/(2*a);
		printf("Given equation has real roots: %.2f and %.2f\n", x1, x2);
	} else {
		printf("No real roots");
	}
	return 0;
}
