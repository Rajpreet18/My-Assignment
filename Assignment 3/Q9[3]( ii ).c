// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(ii):WAP using loop (for, while, do-while):Whether no. is prime or not

#include<stdio.h>

int main(){
	int x,y,z=0;
	printf("Enter the number:");
	scanf("%d",&x);
	int i;
	for(i=1;i<=x;i++){
		y=x%i;
	if(y==0){
		z++;
	}
	} 
	if(z==2){
		printf("The number is a prime number");
	} else{
		printf("The number is not a prime number");
	}
	return 0;
}
