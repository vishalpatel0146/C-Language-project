//  Sum of Elements in Row & Column of 2D Array
//  Devlop a program to print and find the sum of all elements of a given row & column from a 2D array.

#include<stdio.h>

int main() {

    //  'x' is used for row.
    //  'y' is used for column.

    int x, y;

    printf("Enter the size of row: ");
    scanf("%d", &x);

    printf("Enter the size of column: ");
    scanf("%d", &y);

    int a[x][y];

    printf("Enter the element of an array: \n");

    for(int i = 0; i < x; i++) {

        for(int j = 0; j < y; j++) {
            scanf("%d", &a[i][j]);
        }

    }

    printf("\n");

    printf("Element of an array: \n");
    for(int i = 0; i < x; i++) {

        for(int j = 0; j < y; j++) {
            printf("%d  ", a[i][j]);
        }

        printf("\n");
    }

    printf("\n");


    // for row 

    int row;
    int sum1 = 0;
    
    // r:
    printf("Enter row number :- ");
    scanf("%d",&row);

    if(row < 1 || row > x) {
        printf("Invalid row number........\n");
        // goto r;
        return 0;
    }

    // convert row number into index number

    row -= 1;

    for(int j = 0; j < x; j++) {
        printf("Element of row %d :- %d ", row, a[row][j]);
        sum1 += a[row][j];
    }

    printf("The sum of row %d :- %d\n", row, sum1);

    printf("\n");

    // for column

    int col;
    int sum2 = 0;

    // c:

    printf("Enter column number :- ");
    scanf("%d", &col);

    if(col < 1 || col > y) {
        printf("Invalid column number......\n");
        // goto r;
        return 0;
    }

    // convert column number to index number

    col -= 1;

    for(int i = 0; i < y; i++) {
        printf("Element of col %d :- %d ", col, a[col][i]);
        sum2 += a[col][i];
    }

    printf("The sum of col %d :- %d", col, sum2);

}
