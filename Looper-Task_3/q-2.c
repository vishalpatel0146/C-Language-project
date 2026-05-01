//  Digit Counter
//  Develop a Program to count the total number of digits in a number.


// #include<stdio.h>

// void main() {

//     int n = 123;
//     int c= 0;

//     if(n < 0) {
//         n = -n;
//     }
    
//     while(n > 0) {
//         n /= 10;
//         c++;
//     }

//     printf("Toital number of digits :- %d", c);

// }


#include<Stdio.h>

void main() {

    int n;
    printf("Enter any number :- ");
    scanf("%d", &n);

    int c;

    if (n < 0) {
        n = -n;
    }
    
    for(c = 0;n > 0;c++){
        n = n/10;
    }

    printf("Toital number of digits :- %d", c);

}