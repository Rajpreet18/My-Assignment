// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

// PROBLEM-9(v):WAP using loop (for, while, do-while):Range of set of entered nos. by finding smallest and largest

#include <stdio.h>

int main() {
    int x,smallest,largest;
    char choice = 'y';
	printf("Enter a number: ");
    scanf("%d", &x);
    smallest = x;
    largest = x;
    while (choice == 'y' || choice == 'Y') {
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
		    if (choice == 'y' || choice == 'Y') {
            printf("Enter a number: ");
            scanf("%d",&x);
        if (x < smallest) {
            smallest = x;
        }
        if (x > largest) {
            largest = x;
            }
        }
    }
    printf("\nSmallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);
    printf("Range is from %d to %d",smallest,largest);
    return 0;
}
