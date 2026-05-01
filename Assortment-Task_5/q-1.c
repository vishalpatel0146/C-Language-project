//  Negative Element in 1D Array.
//  Develop a program that finds all the negative element from a given 1D array.

#include<stdio.h>

void main() {

    int n;
    printf("Enter the array's size: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array's element:\n");
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\n");

    printf("Element of an arrar: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }

    printf("\n");
    printf("\n");
    
    //  for negative number 
    printf("negative element from an array: ");

    for(int i = 0; i < n; i++) {

        if(a[i] < 0) {
            printf("%d ", a[i]);
        }

    }

}