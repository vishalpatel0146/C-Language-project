//  Triangle Angle Finder  
//  Write a program to find the third angle of a right triangle when two other angles are given. 

#include<stdio.h>

void main()  {
	
	int f, s;
	
	printf("First Angle :- ");
	scanf("%d",&f);
	
	printf("Second Angle :- ");
	scanf("%d",&s);
	
	int t = 180-(f+s);
	printf("Third Angle :- %d",t);
	
}