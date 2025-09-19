// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-4:WAP to implement assignment operators such as += , -= , *=, /= %= etc.

#include<stdio.h>

int main () {
	int a = 3, b = 4;
	int c = 5, d = 2;
	int u = 3, v = 4;
	int w = 10, x = 3;
	int y = 8, z = 6;
	a+=b;
	printf("%d\n", a);
	c-=d;
	printf("%d\n", c);
	u*=v;
	printf("%d\n", u);
	w/=x;
	printf("%d\n", w);
	y%=z;
	printf("%d\n", y);
	return 0;
}
