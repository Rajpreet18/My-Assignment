// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(vii):WAP using loop (for, while, do-while):HCF of two numbers

#include<stdio.h>

int main(){
	int x,y,hcf;
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	int max=x>y ? x:y;
	int i=0;
	for(i=1;i<=max;i++){
		if(x%i==0 && y%i==0){
			hcf=i;
		}
	}
	printf("The HCF of these two numbers is %d",hcf);
	return 0;
}
