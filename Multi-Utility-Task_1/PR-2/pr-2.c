//  Gross Salary Calculator
//  Create a program that gross by adding percentages of HRA, DA, TA to base salary as chossen by the user

#include<stdio.h>

void main() {
	
	int b;
	float h, d, t;
	
	printf("Enter Base Salary :- ");
	scanf("%d",&b);
	
	printf("Enter HRA :- ");
	scanf("%f",&h);
	
	printf("Enter DA :- ");
	scanf("%f",&d);
	
	printf("Enter TA :- ");
	scanf("%f",&t);
	
	float g = b + ( b*h/100 + b*d/100 + b*t/100);
	printf("Gross Salary :- %0.3f",g);
	
}