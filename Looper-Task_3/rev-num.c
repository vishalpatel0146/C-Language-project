//  Rever Number


#include<stdio.h>

void main() {

    int n = 1234;
    int l;
    int r = 0;
    
    while(n > 0){
        
        l = n%10;
        n = n / 10;
        r = (r*10)+l;
    }
    
    printf("%d",r);

}