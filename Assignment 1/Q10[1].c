// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-10:WAP for compound interest

#include<stdio.h>
#include<maths.h>

int main () {
	double prin, rate, total;
    int years, n;
    printf("Enter the principle (P): ");
    scanf("%lf", &prin);
    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;
    printf("Enter the number of years (t): ");
    scanf("%d", &years);
    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &n);

    total = prin * pow(1 + rate / n, n * years);
    printf("After %d years, total would be %.2lf", years, total);

	return 0; 
}

