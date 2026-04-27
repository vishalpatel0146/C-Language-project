// Develop a Program that prints the given Left half triangle pattern using a nested for loop.

//          5
//        4 5
//      3 4 5
//    2 3 4 5
//  1 2 3 4 5

#include<stdio.h>

void main() {

    for(int i = 5; i >= 1; i--) {

        for(int j = 1; j < i; j++) {
            printf("  ",j);
        }

        for(int k = i; k <= 5; k++) {
            printf("%d ",k);
        }

        printf("\n");
    }

}