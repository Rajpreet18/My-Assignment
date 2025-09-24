// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-5(i):To check whether number is even or odd 
and also negative or positive by using (i) if-else*/

#include<stdio.h>

int main () {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	if(x>0 && x%2==0){
		printf("The number is positive.\n");
		printf("The number is even.\n");
	} else if(x>0 && x%2!=0){
		printf("The number is positive.\n");
		printf("The number is odd.\n");
	} else if(x<0 && x%2==0){
		printf("The number is negative.\n");
		printf("The number is even.\n");
	} else {
		printf("The number is negative.\n");
		printf("The number is odd.\n");
	}
	return 0;
}
