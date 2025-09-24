// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-4:Display month name according to the month number using Switch Statement

#include<stdio.h>

int main () {
	int monthOfYear;
    printf("Enter a month of the year (1-12): ");
    scanf("%d", &monthOfYear);
    switch(monthOfYear){
        case 1:
            printf("It is january.");
            break;
        case 2:
            printf("It is February.");
            break;
        case 3:
            printf("It is March.");
            break;
        case 4:
            printf("It is April.");
            break;
        case 5:
            printf("It is May.");
            break;
        case 6:
            printf("It is June.");
            break;
        case 7:
            printf("It is July.");
            break;
        case 8:
            printf("It is August.");
            break;
        case 9:
            printf("It is September.");
            break;
        case 10:
            printf("It is October.");
            break;
        case 11:
            printf("It is November.");
            break;
        case 12:
            printf("It is December.");
            break;
            default:
              printf("Please pick only a number from 1-12.");
    }
	return 0;
}
