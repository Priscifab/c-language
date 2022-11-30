#include <stdio.h>

/**factor(int number) factor is the function name, number is theparameter
 *the variable number can only be used within the function factoe. it would not be recognized outside the funcrion it was created with
 * scanf ( could only be gotten inside the factor function, kutside it would not compile
 *
 * note we return factorial not factor or 0, cuz return gives us back thr data type we initialzed wirh not the function name 
 *This is how to create a function
 */

int factor(int number)
{
	printf("enter a number: ");
	scanf("%d", &number);
	int factorial = 1;
	for(int i = number; i > 1; i--)
	{
		factorial *= i;
	}
	return factorial;
}
	

/**int fact = factor(0); leaving the () empty didnt compile so i had to out 0 therr since it didnt accept any other parameter and besides the value to be calculated which is the number variable is gotten from the user
 * this second code is the process of invoking a function, in our case to do this we assign it(factor) to a variable fact inorder to invoke or call it
 *the advantage of this tha we cam keeo callin it for as long as we want simply ny assigning it to new variables
 *
 */

int main ()
{
	int fact = factor(0);
	int fact2 = factor(0);
	int fact3 = factor(0);

	printf("The factorial of is %d\n", fact);
	printf("the second is %d\n", fact2);
	printf(" the 3rd is %d\n",  fact3);

/** since we dont intend to change the data tyle and initially we declared an integer therefore we are expecting it to print an integer
 *therefore we can just call the function directly without assigning it to any variable
 */
	printf("the fac value is %d\n", factor(0));

	return 0;
}
