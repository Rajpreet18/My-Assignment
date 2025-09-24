// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-6:To check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly.

#include<stdio.h>

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n%5==0 && n%8==0){
		printf("The number is divisible by both 5 and 8.");
	} else if(n%5==0){
		printf("The number is divisible by 5 only.");
	} else if(n%8==0){
		printf("The number is divisible by 8 only.");
	} else{
		printf("The number is neither divisible by 5 nor by 8.");
	}
	return 0;
}
