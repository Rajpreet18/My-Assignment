// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9:WAP to divide two numbers and use type casting operation

#include<stdio.h>

int main () {
	int x, y;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	float z = x/y;
	printf("%d divided by %d without typecasting: %.2f\n", x, y, z);
	float p = (float)x/y;
	printf("%d divided by %d with typecasting: %.2f\n", x, y, p);
	int ascii;
	printf("Enter a number to find the ascii letter corresponding to it: ");
	scanf("%d", &ascii);
	printf("ASCII %d as char = %c\n", ascii, (char)ascii);
	return 0;
}
