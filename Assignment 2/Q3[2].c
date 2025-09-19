// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-3:WAP to format console output using '\n', '\t', '\b' within printf statement.

#include<stdio.h>

int main () {
	/* \b goes back a character and overwrites the character
	just after the cursor and replaces with ' ', here 'l' is
	replaced by ' ' because \b is used 3 times*/
	
	printf("Hello World!\b\b\b \n");
	
	// \t insert a horizontal tab, used to align data
	
	printf("Name:\tRajpreet Ghoshal\n");
	printf("Age:\t20\n");
	printf("Gender:\tMale\n");
	
	/* \n is used to insert a new line character
	which shifts the cursor to the next line*/
	
	printf("Hello! How are you today?\nNow the cursor will shift to a new line");

	return 0;
}
