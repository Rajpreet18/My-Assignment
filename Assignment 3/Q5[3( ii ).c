// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-5(ii):To check whether number is even or odd and also 
negative or positive by using (ii) ternary operator*/

#include<stdio.h>

int main () {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	(x%2==0) ? printf("%d is even.\n", x) : printf("%d is odd.\n", x);
	(x>0) ? printf("%d is positive.\n", x) :
	 (x<0) ? printf("%d is negative.\n", x) : printf("%d is zero.\n", x);
	return 0;
}
