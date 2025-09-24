// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(viii):WAP using loop (for, while, do-while):GCD of two numbers

#include<stdio.h>

int main(){
	int x,y,gcd;
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	int max=x>y ? x:y;
	int i=0;
	for(i=1;i<=max;i++){
		if(x%i==0 && y%i==0){
			gcd=i;
		}
	}
	printf("The GCD of these two numbers is %d",gcd);
	return 0;
}
