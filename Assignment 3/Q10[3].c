// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-10:Write a program to read in numbers until the number -999 is encountered.
 The sum of all numbers read until this point should be printed out.*/
 
 #include <stdio.h>

int main(){
	int sum=0,x=0;
	while(x!=-999){
	printf("Enter a number : ");
	scanf("%d", &x);
	if(x==-999){
		break;
	}
	sum +=x;
	}
	printf("The sum of the numbers is %d.",sum);
}
