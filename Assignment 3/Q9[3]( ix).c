// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(ix):WAP using loop (for, while, do-while): Generate Fibonacci series

#include<stdio.h>

int main(){
	int n,x=0,y=1,sum;
	printf("Enter the terms of Fibonacci series: ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("Number %2d of series is: %3d\n",i+1,x);
		sum=x+y;
		x=y;
		y=sum;
	}
	return 0;
}
