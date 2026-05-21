// Q.1 Calculator
// * Develop a menu-driven program to implement arithmetic operations such as +, -, /, and % using UDF,
// switch case, and looping. Make sure that the program is endless until a certain letter is pressed.

#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

float division(int a, int b)
{
	return (float)a / b;
}

int mod(int a, int b)
{
	return a % b;
}

int main()
{
	int a, b, operater, ans;
	float divans;
	int i = 1;

	while (i >= 1)
	{

		printf("Press 1 To Find Addition\n");
		printf("Press 2 To Find Subtraction\n");
		printf("Press 3 To Find Multiplication\n");
		printf("Press 4 To Find Division\n");
		printf("Press 5 To Find Modulus\n");
		printf("Press 0 To Exit\n");

		try_again:
		printf("Enter Your Choise :- ");
		scanf("%d", &operater);

		if (operater == 0)
		{
			printf("The calculator is closes\n");
			break;
		}

		if (operater > 5 || operater < 0) 
		{
			printf("You Enter Worng Number\nPlease Try Again......\n\n");
			goto try_again;
		}

		printf("Enter First value :- ");
		scanf("%d", &a);

		printf("Enter Second value :- ");
		scanf("%d", &b);

		switch (operater)
		{
		case 1:

			ans = add(a, b);
			printf("Addition of %d and %d :- %d\n\n", a, b, ans);

			break;

		case 2:

			ans = sub(a, b);
			printf("Subraction of %d and %d :- %d\n\n", a, b, ans);

			break;

		case 3:

			ans = multiply(a, b);
			printf("Multiplication of %d and %d :- %d\n\n", a, b, ans);

			break;

		case 4:
			
			if(b > 0 && a > 0) {
				divans = division(a, b);
				printf("Division of %d and %d :- %0.2f\n\n", a, b, divans);
			} else {
				printf("You Enter Worng Number\nPlease Try Again......\n\n");
				goto try_again;
			}

			break;

		case 5:
			
			if(b > 0 && a > 0) {
				ans = mod(a, b);
				printf("Modules of %d and %d :- %d\n\n", a, b, ans);
			} else {
				printf("You Enter Worng Number\nPlease Try Again......\n\n");
				goto try_again;
			}

			break;
		}

		i++;
	}

	return 0;
}
