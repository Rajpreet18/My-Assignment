// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-11:Keep reading in integers until one integer larger than 100 is not input.
 For example: 4 /- 90, 35, 78, 110 QUIT! (since 110 is bigger than 100)*/
 
 #include <stdio.h>

int main(){
	int x=0;
		while(x<100){
		printf("Enter a number: ");
		scanf("%d",&x);
		if(x>100){
			printf("QUIT!");
			break;
		}
	}
	return 0;
}
