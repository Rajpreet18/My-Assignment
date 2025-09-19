// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-7:WAP to find the Nth root of a number.

#include<stdio.h>
#include<math.h>

int main () {
	float x, y;
	printf("Enter the number of which you want nth root: ");
	scanf("%f", &x);
	printf("Enter the value of n: ");
	scanf("%f", &y);
	float result = pow(x, 1/y);
	printf("\nThe result is: %.2f", result);
	return 0; 
}
