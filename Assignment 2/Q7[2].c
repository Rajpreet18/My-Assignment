// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-7:WAP to utilize ternary operator (?:).

#include<stdio.h>

int main () {
	int x, y;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	int z = x>y? x:y;
	printf("The number which is greater than the other is: %d", z);
	return 0;
}
