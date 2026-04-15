// Q-1.  Temperature Converter  
//    Develop a program that covnerts temperature from degrees Celsius to Fahrenheit using the formula: f=(9/5*c)+32

#include<stdio.h>

void main() {
	
	float c;
	
	printf("Temperature in Celsius :- ");
	scanf("%f",&c);
	
	float f = (1.8*c)+32;
	printf("Temperature in Fahrenheit :- %0.3f",f);
	
}