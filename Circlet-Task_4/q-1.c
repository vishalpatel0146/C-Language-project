// Develop a Program that prints the given Right half triangle pattern using a nested for loop.

//  41
//  41 42
//  41 42 43
//  41 42 43 44
//  41 42 43 44 45

#include<stdio.h>

void main() {

    for(int i = 41; i <= 45; i++) {

        for(int j = 41; j <= i; j++) {
            printf("%d ",j);
        }

        printf("\n");
    }

}