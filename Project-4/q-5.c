// Develop a Program that prints the given Inverted Full Pyramid pattern using a nested for loop.

//          5
//        4 5 4
//      3 4 5 4 3 
//    2 3 4 5 4 3 2
//  1 2 3 4 5 4 3 2 1

#include<stdio.h>

void main() {

    for(int i = 1; i <= 5; i++) {

        for(int j = i; j < 5; j++) {
            printf("  ",j);
        }

        for(int k = 6 - i; k <= 5; k++) {
            printf("%d ",k);
        }

        for(int k = 4; k >= 6 - i; k--) {
            printf("%d ",k);
        }

        printf("\n");
    }

}