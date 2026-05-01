//  Digit Addition
//  Develop a Program to find the sum of a number's first and last digits.

#include<stdio.h>

void main() {

    int n = 123;
    int l = n % 10;
    int s;

    while(n > 9) {
        n = n/10;
    }

    s = n + l;
    printf("Sum of First and Last number :- %d", s);

}