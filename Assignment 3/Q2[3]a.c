// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-2(a):To find greatest of 3 integers using (a) if-else

# include<stdio.h>

int main() {
	int x, y, z;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	printf("Enter the third number: ");
	scanf("%d", &z);
	if(x>y && x>z){
		printf("The greatest of three is %d.", x);
	} else if(y>x && y>z){
		printf("The greatest of three is %d.", y);
	} else if(z>x && z>y){
		printf("The greatest of three is %d.", z);
	} else {
		printf("Neither is greatest.");
	}
    return 0;
};
