// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-5:WAP to display a fraction 
(rational number). (Ask the user to input numerator
 and denominator integers, then display it in the 
 form of p/q without any simplification)*/

#include<stdio.h>

int main () {
	int x;
	int y;
	printf("Enter the numerator: ");
	scanf("%d", &x);
	printf("Enter the denominator: ");
	scanf("%d", &y);
	if(y==0){
		printf("Not possible");
	} else{
		printf("The fraction is: %d/%d", x, y);
	}
	return 0; 
}
