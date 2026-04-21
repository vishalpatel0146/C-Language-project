//  Alphabat Skipper
//  Develop a program that prints all alphabats from 'a' to 'z' by skipping 3 alphabats using a do while loop.

#include<stdio.h>

void main() {

    // int n;
    // printf("How much alphabate you want to skip :- ");
    // scanf("%d", &n);
    
    char a = 'a';
    
    printf("Alphabats :- ");
    do{
        printf("%c, ",a);

        a += 4;
        // a += n;
        // a++;
    }while(a <= 'z');

    
}