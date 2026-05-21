//   Q.2 Frequency Counter
//   Extend the program to count the frequency of each character in a given string.


#include<stdio.h>
#include<string.h>


void main() {

    char comn[50];

    printf("Enter String :- ");
    scanf("%s", &comn);

    strlwr(comn);

    int count, i, j, k;

    for(i = 0; comn[i] != '\0'; i++) {

        count = 0;

        // duplicate cheacker
        for(j = 0; j < i; j++) {

            if(comn[i] == comn[j]) {
                count--;
                break;
            }

        }

        // frequence counter
        if(count >= 0) {

            for(k = 0; comn[k] != '\0'; k++) {

                if(comn[i] == comn[k] ) {
                    count++;
                }

            }

            printf("\n%c = %d", comn[i], count);
        }
        

    }
    


}