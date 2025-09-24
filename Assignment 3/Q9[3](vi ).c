// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(vi):WAP using loop (for, while, do-while):Multiplication table

#include<stdio.h>

int main(){
	int x;
	printf("Enter the number for table: ");
	scanf("%d", &x);
		int i = 0;
		for(i=1; i<=10; i++)
	{
		printf("%2d * %3d = %4d\n", i, x, x*i);
	}
	return 0;
}
