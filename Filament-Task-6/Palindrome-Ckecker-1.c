//  Q.1 Palindrome Checker
//  Develop a program that checks whether a given string is a palindrome or not without using string functions.


#include<stdio.h>

void main() {

    char str[50];
    again:
    printf("Enter String :- ");
    scanf("%s", &str);

    int range = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        range++;
    }

    printf("Length of string ( %s ):- %d\n", str, range);

    char rev[50];

    printf("Rev string of ( %s ) :- ", str);

    for(int i = 0; i < range; i++) {

        rev[i] = str[range - i - 1];
        printf("%c", rev[i]);

    }


    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {

        if(rev[i] != str[i]) {
            count++;
        }

    }

    if(count == 0) {
        printf("\nThe given string is Palindrome.");
    } else {
        printf("\nThe given string is not Palindrome.\n");
        goto again;
    }



}