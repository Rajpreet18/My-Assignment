// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-6:WAP to add, subtract, multiply, divide 
numbers, modulus operator (%).*/

#include<stdio.h>

int main () {
	int x, y, z, a, b, c, d;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	z=x+y;
	a=x-y;
	b=x*y;
	printf("Addition of %d and %d is: %d", x, y, z);
	printf("\nSubtraction of %d and %d is: %d", x, y, a);
	printf("\nMultiplication of %d and %d is: %d", x, y, b);
	if(y!=0){
		c=x/y;
		d=x%y;
		printf("\nDivision of %d and %d is: %d", x, y, c);
		printf("\nModulus of %d and %d is: %d", x, y, d);
	} else{
		printf("\nDivision and modulus not possible.");
	}
	return 0; 
}
