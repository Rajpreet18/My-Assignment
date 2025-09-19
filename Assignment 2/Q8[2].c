// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-8:WAP using sizeof() function to find size of 
char, integer, long int, float and double*/

#include<stdio.h>

int main () {
	int x = sizeof(char);
	printf("The size of a char is : %d\n",x);
	int y = sizeof(int);
	printf("The size of an int is : %d\n",y);
	int z = sizeof(long int);
	printf("The size of a long int is : %d\n",z);
	int a = sizeof(float);
	printf("The size of a float is : %d\n",a);
	int b = sizeof(double);
	printf("The size of a double is : %d\n",b);
	return 0;
}
