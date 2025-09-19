// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-6:WAP to shift left and shift right operators (>> and <<).

#include<stdio.h>

int main () {
	//Right shift(>>) divides a number by 2^n.
	int x, n;
	printf("Enter the number: ");
	scanf("%d", &x);
	printf("Enter the power of 2^n: ");
	scanf("%d", &n);
	int result = x >> n;
	printf("%d\n",result);
		//Left shift(<<) multiplies a number by 2^n.
		int result0 = x << n;
	printf("%d",result0);
	return 0;
}
