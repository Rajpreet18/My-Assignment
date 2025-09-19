// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

//              ASSIGNMENT-2

/* PROBLEM-1:WAP to practice math functions such as 
sin(), cos(), log(), pow(), sqrt() etc. by
including <math.h> header file.*/

#include<stdio.h>
#include<math.h>

int main() {
	int x, z;
	float y, a, b, c, d;
	printf("Enter the number: ");
	scanf("%d", &x);
	if(x>0){
		y = sqrt(x);
	printf("The square root of %d is %.2f.\n", x, y);
	} else{
		printf("Square root not possible\n");
	}
	z = pow(x, 2);
	printf("The square of %d is %d.\n", x, z);
	a = sin(x);
	printf("The sin value of %d is %.2f.\n", x, a);
	b = cos(x);
	printf("The cos value of %d is %.2f.\n", x, b);
	c = tan(x);
	printf("The tan value of %d is %.2f.\n", x, c);
	if(x>0){
		d = log(x);
	printf("The log value of %d is %.2f.\n", x, d);
	} else{
		printf("Log is not possible");
	}
		return 0;
}
