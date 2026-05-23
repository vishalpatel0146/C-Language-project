/* Develop a Program to find cubes of all element from a given 2D array using Pointer with UDF. */

#include<stdio.h>


void cube(int x1, int y1, int *ptr1[x1][y1]) {

    int ans;

    printf("\nCubes of all Element :\n");

    for(int i = 0; i < x1; i++) {

        for(int j = 0; j < y1; j++) {

            ans = *ptr1[i][j] * *ptr1[i][j] * *ptr1[i][j];

            printf("%d ", ans);

        }

        printf("\n");
    }

}



int main() {

    // Remember
    // x is used for row.
    // y is used for column.

    int x, y;

    printf("Enter Size of Row :- ");
    scanf("%d", &x);

    printf("Enter Size of Column :- ");
    scanf("%d", &y);

    int a[x][y];
    int *ptr[x][y];

    printf("\nEnter Array Element : \n");
    for(int i = 0; i < x; i++){

        for(int j = 0; j < y; j++) {

            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);

            ptr[i][j] = &a[i][j];
            
        }

    }

    cube(x, y, ptr);

    return 0;
} 