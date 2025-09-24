// NAME- RAJPREET GHOSHAL
// ROLL NUMBER- 1025030442
// BATCH- 1A82

/* PROBLEM-8:Write a program to read in 5 numbers and 
compute the average, max, min, standard deviation.*/

#include<stdio.h>

float getmax(float a, float b, float x, float y, float z) {
    if(a>b && a>x && a>y && a>z){
        return a;
    } else if(b>a && b>x && b>y && b>z){
        return b;
    }  else if(x>a && x>b && x>y && x>z){
        return x;
    }  else if(y>a && y>b && y>x && y>z){
        return y;
    } else {
    	return z;
	}
}
float getmin(float a, float b, float x, float y, float z) {
    if(a<b && a<x && a<y && a<z){
        return a;
    } else if(b<a && b<x && b<y && b<z){
        return b;
    }  else if(x<a && x<b && x<y && x<z){
        return x;
    }  else if(y<a && y<b && y<x && y<z){
        return y;
    } else {
    	return z;
	}
}

int main() {
	float a, b, x, y, z, max, min;
	printf("Enter 5 numbers: ");
	scanf("%f %f %f %f %f", &a, &b, &x, &y, &z);
	float avg = (a+b+x+y+z)/5;
	printf("The average of these numbers is: %.2f\n", avg);
	max = getmax(a, b, x, y, z);
	 printf("The maximum value is: %.2f\n", max);
	min = getmin(a, b, x, y, z);
	 printf("The minimum value is: %.2f\n", min);
	float stddev= pow((pow(a-avg,2)+pow(b-avg,2)+pow(x-avg,2)+pow(y-avg,2)+pow(z-avg,2))/5,0.5);
	printf("The standard deviation of these numbers is %.2f",stddev);
	return 0;
}
