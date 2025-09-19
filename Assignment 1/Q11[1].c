// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-11:WAP to calculate gross salary of a person,
where gross_salary=basic+da+ta and da is 10% of basic 
and ta is 12% of basic.*/

#include<stdio.h>

int main () {
	float basic;
	printf("Enter your base income: ");
	scanf("%f", &basic);
	float da = 0.1 * basic;
	float ta = 0.12 * basic;
	float grossSalary = basic + da + ta;
	printf("your gross salary is: %.2f", grossSalary);
	return 0; 
}
