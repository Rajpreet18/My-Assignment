// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9:WAP for simple interest.

#include<stdio.h>

int main () {
	float prin, inter;
	printf("Enter the principle amount: ");
	scanf("%f", &prin);
	printf("Enter the interest rate (in %%): ");
	scanf("%f", &inter);
	inter = 1 + (inter/100);
	float result = prin * inter;
	printf("The final amount is: %.2f", result);
	return 0; 
}
