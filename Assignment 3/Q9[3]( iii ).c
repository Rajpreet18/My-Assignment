// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(iii):WAP using loop (for, while, do-while):X raised to power n

#include<stdio.h>

int main(){
	int x,n;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("Enter the power of n:");
	scanf("%d",&n);
	int y=1;
	int i=0;
	for(i=0;i<n;i++){
		y*=x;
	}
	printf("The desired number is %d",y);
	return 0;
}
