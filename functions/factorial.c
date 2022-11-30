#include <stdio.h>

/**The main ideas behind functions is DRY(Do Not Repeat yourself
 * functions are tools that we can use at our disposal
 * we can even go as far as creating a library of functions
 *functions are made for general use that to be reused or called upon anywhere in a code, therefore it should be specific and smaller not complicated
 *in the code below i want to get the factorial of the user input. 
 *mathematically to get factorial, we multiply the number counting down ex. the factorial of 5 would be 5x4x3x2x1 = 120
 *to represent this in code we loop through the number (user inout) with decrement i--. 
 *then multiply each decrement of i(equivalant to the user input with 1. if user input is 5(number = i) then  i.e factorial *= i; means 1*5*1*4*1"3*1*2*1*1 = 120
 *
 */

int main()
{
 	int number;
	printf("enter a number: ");
	scanf("%d", &number);

	int factorial = 1;

	for(int i = number; i > 1; i--)
	{
	 factorial *= i;
	 //or factorial = factorial * i;
	}

	printf("the factorial of %d is %d\n", number, factorial);

// to increament we do


	int user;
	printf("enter a new user: ");
	scanf("%d", &user);

	int ans = 1;
	for(int i = ans; i<= user; i++)
	{
	ans = ans * i;
	}
	printf("the nee user fact%d\n", ans);

 return 0;
}
