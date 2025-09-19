// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-10:WAP to practice type casting using the atof() or atoi(), etc functions. 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main () {
	char price[50] = "97.987";
	float x = atof(price) + 5.00;
	int y = atoi(price) - 3;
	printf("%.2f\n", x);
	printf("%d", y);
	return 0;
}
