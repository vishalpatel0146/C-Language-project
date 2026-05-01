//  Largest element in 2D Array.
//  Develop a program to find the largest element from a givent 2D array.

#include<stdio.h>

void main() {

    //  'x' is used for row.
    //  'y' is used for column.

    int x, y;

    printf("Enter a size of row: ");
    scanf("%d", &x);

    printf("Enter a size of column: ");
    scanf("%d", &y);

    int a[x][y];
    printf("Enter array element: \n");

    for(int i = 0; i < x; i++) {

        for(int j = 0; j < y; j++) {
            scanf("%d", &a[i][j]);
        }

    }

    printf("\n");

    printf("Element of an array: \n");
    for(int i = 0; i < x; i++) {

        for(int j = 0; j < y; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }

    }

    printf("\n");

    //   Now let supose the first element of an array is equal to our new variable element and we have to find largest number.

    int lg = a[0][0];

    for(int i = 0; i < x; i++) {

        for(int j = 0; j < y; j++) {

            if(lg < a[i][j]) {
                lg = a[i][j];
            }

        }

    }

    printf("largest element from an array: %d",lg);


}