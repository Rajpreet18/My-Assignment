// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-5:Assignment operator assigns right hand side 
value to left hand side variable. Use this idea to interchange (swap) 
values of two variables. (Hint: You may need a third variable.
Think like switching coffee and tea between two cups using a third cup)*/

#include<stdio.h>

int main () {
	int x, y, z;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	z = x;
	x = y;
	y = z;
	printf("The value of first number now is: %d\n", x);
	printf("The value of second number now is: %d\n", y);
	return 0;
}
