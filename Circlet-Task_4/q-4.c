// Develop a Program that prints the given Inverted Left half triangle pattern using a nested for loop.

//  1 0 1 0 1
//    1 0 1 0
//      1 0 1
//        1 0
//          1

#include<stdio.h>

void main() {

    for(int i = 1; i <= 5; i++) {

        for(int j = i; j > 1; j--) {
            printf("  ",j);
        }

        for(int k = 1; k <= 6 - i; k++) {
            if(k%2==0) {
                printf("0 ");
            } else {
                printf("1 ");
            }

        }

        printf("\n");
    }
    
}