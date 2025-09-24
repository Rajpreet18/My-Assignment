// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(i):WAP using loop (for, while, do-while): Factorial of number

#include<stdio.h>

int main(){
int x;
	int fac=1;
	printf("Enter the number of which factorial is needed: ");
	scanf("%d",&x);
	int i=0;
	for(i=x;i>0;i--){
		fac*=i;
	}
	printf("The factorial value is %d",fac);
	return 0;
}
