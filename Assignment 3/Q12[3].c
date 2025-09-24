// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-12:Read in 20 integers and count the even numbers

#include <stdio.h>

int main(){
	int sum=0,x;
	int i=0;
	for(i = 0; i<20; i++){
	printf("Enter number %2d: ",i+1);
	scanf("%d", &x);
	if(x%2==0){
		sum +=x;
	}
	}
	printf("The sum of the even inputs is %d.",sum);
	return 0;
}
