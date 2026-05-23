/* Develop a program that finds the length of a string using a pointer. */

#include<stdio.h>

int main() {

    char str[100];
    printf("Enter Any String :- ");
    fgets(str, sizeof(str), stdin);

    char *ptr = str;
    int count = 0;

    for(int i = 0; ptr[i] != '\0' && ptr[i] != '\n'; i++) {
        count++;
    }

    /* Uper For-loop me do condition use ak '\0' aise check hoga ki string ka ending tak hi chale ga 
    aur second '\n' condition kiya hai kui ki fgets() Enter ko bhi character count kar leta hai isliya.  */

    printf("The Length of String %d", count);

    return 0;
}