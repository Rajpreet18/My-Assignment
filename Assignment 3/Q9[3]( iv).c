// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(iv):WAP using loop (for, while, do-while):Check if the input integer is an Armstrong number or not?

#include<stdio.h>
#include<math.h>

int main(){
	int x,a,b,sum=0,n=0;
	printf("Enter the number to check : ");
	scanf("%d", &x);
		int y = x; 
		while(y!=0)
	{
		y/=10;
		n++;
	}
		int i = 0;
	for(i=pow(10,n); i>1;i/=10)
	{
		a = x%i;
		b = a/(i/10);
		
		sum+=(pow(b,n));
	}
	if(sum == x)
	{
		printf("The number is an Armstrong Number");
	}
	else
	{
		printf("The number is not an Armstrong Number");
	}
	return 0;
}
