// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

//                ASSIGNMENT-3

/* PROBLEM-1:For any character entered through keyboard check whether the entered character is
capital letter, small letter, a digit or special symbol*/

#include<stdio.h>

int main () {
	char x;
	printf("Enter the character: ");
	scanf("%c", &x);
	if(x>=65 && x<=90){
		printf("Entered character is a uppercase letter.");
	} else if(x>=97 && x<=122){
		printf("Entered character is a lowercase letter.");
	} else if(x>='0' && x<='9'){
		printf("Entered character is a digit.");
	} else {
	printf("Entered character is a special character.");}
    return 0;
}
