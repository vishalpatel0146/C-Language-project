//  Step-1 -->  Grade Collection 
//  Develop a program that takes a score out of 100 as input from the user and calculates the 
// corresponding grade using a ternary operator. Allocate grades from A to F for various ranges. 


#include<stdio.h>

int main() {

    char grade;
    int a;

    printf("Enter Your score :- ");
    scanf("%d", &a);

    if(a > 100){
        printf("Invalid Inpute.....\n");
        return 0;
    }

    grade =  (a >= 90) ? 'A' : 
            (a >= 70 && a <= 89) ? 'B' :
            (a >= 50 && a <= 69) ? 'C' :
            (a >= 33 && a <= 49) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);


    //   Step-2 -->  Addition Comments
    //   Extent the program to provide additional comments based on the grad using a switch-case statement.
    //   For example, if the grade is 'A', then print 'Excelelnt work!'. If the grade is 'B', then print, 'Well done'.
    //   If the garde is 'C', then print, 'Good job'. If the grade is 'D', then print, 'You passed'. And if the grade
    //   is 'F', then print, 'Sorry, you are failed'.

    switch (grade)
    {
    case 'A':
        printf("Exclient Work! ");
        break;

    case 'B':
        printf("Well done! ");
        break;

    case 'C':
        printf("Good job! ");
        break;

    case 'D':
        printf("You passed! ");
        break;

    case 'F':
        printf("Sorry, you are failed! ");
        break;

    default:
        printf("Invali......");
        break;
    }

    //   Step-3 -->  Eligibility Check
    //   Further, extent the program to check eligibility for the next level based on the grade using an if-else
    //   statement. Print 'Congratulation! You are aligible for next level' if grade is from 'A' to 'D'. Print 
    //   'Please try again next time' if the grade is 'F'.

    if(grade == 'A' && grade == 'D'){
        printf("Congratulation! You are aligible for next level.");
    } else{
        printf("Please try again next time.");
    }

    return 0;

}