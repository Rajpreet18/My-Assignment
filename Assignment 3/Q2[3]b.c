// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-2(b):To find greatest of 3 integers using (b) ternary operator.

# include<stdio.h>

int main() {
	int a, b, c, greatest;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	greatest = (a > b) ? ((a > c) ? a : c) 
					: ((b > c) ? b : c);
	printf("Greatest number is: %d\n", greatest);
    return 0;
};
