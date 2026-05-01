//  Transpose of 2D Array 
//  Develop a program to find the transpose matrix of a given 2D array

#include<stdio.h>

void main() {

    // 'x' is used for row.
    // 'y' is used for column.

    int x, y;

    printf("Enter size of row: ");
    scanf("%d",&x);

    printf("Enter size of column: ");
    scanf("%d",&y);

    int a[x][y];
    printf("Enter element of an array: \n");

    for(int i = 0; i < x; i++) {

        for(int j = 0; j < y; j++) {
            scanf("%d", &a[i][j]);
        }

    }

    printf("The matrix that you given: \n");
    
    for(int i = 0; i < x; i++) {

        for(int j = 0; j < y; j++) {
            printf("%d  ", a[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    // to find transpose of given matrix we just have to shift the position like x = column & y = row

    printf("The  transpose matrix of an array: \n");

    for(int i = 0; i < y; i++) {

        for(int j = 0; j < x; j++) {
            printf("%d  ", a[j][i]);
        }

        printf("\n");
    }


}