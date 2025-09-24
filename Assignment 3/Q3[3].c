// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-3:To implement calculator (+,-/,*,% ) using switch statement

#include<stdio.h>

int main () {
char operator;
int x, y;
double result;
printf("Enter the first number: ");
scanf("%d", &x);
printf("Enter the operator (+ - * / %%): ");
scanf(" %c", &operator);
printf("Enter the second number: ");
scanf("%d", &y);
switch(operator){
    case '+':
         result = x + y;
         break;
    case '-':
         result = x - y;
         break;
    case '*':
         result = x * y;
         break;
    case '/':
      if(y == 0){
        printf("You can not divide by zero!\n");
      } else {
         result = x / y;
      }break;  
	case '%':
      if(y == 0){
        printf("Modulus not possible!\n");
      } else {
         result = x % y;
      }break;  
         default: 
         printf("Invalid operator\n");     
}
printf("Result: %.2lf", result);
return 0;
}
