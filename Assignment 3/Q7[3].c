// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-7:A library charges a fine for every book returned late. 
For the first 5 days the fine is 50 paisa, for 6-10 days fine is 
one rupee and above 10 days fine is 5 rupees. If you return the book 
after 30 days your membership will be canceled. WAP to accept no. of 
days the member is late to return the book and display the fine or 
appropriate message*/

#include<stdio.h>

int main() {
	int x, y;
	printf("Enter the number of days: ");
	scanf("%d", &x);
	printf("Enter the number of books: ");
	scanf("%d", &y);
	if(x<=5 && x>0 && y>0){
		float fine = x * y * 0.5;
		printf("Your fine is %.2f rupees.", fine);
	} else if(x<=10 && x>5 && y>0){
		float fine = x * y * 1;
		printf("Your fine is %.2f rupees.", fine);
	} else if(x<=30 && x>10 && y>0){
		float fine = x * y * 5;
		printf("Your fine is %.2f rupees.", fine);
	} else if (x>30 && y>0){
		printf("Your membership will be canceled.");
	} else {
		printf("Invalid!");
	}
	return 0;
}
