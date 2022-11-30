#include <math.h>
#include <stdio.h>

/**create a program that takesbtwo double as inputs 
 * then use it to calculate the hypotenuse of a right angle triangle
 * main - thw hypotenuse of a right traingle
 *we include math.h cuz we need the sqrt function
 *if the liker doesn.t link the math.h then 
 *to fix durin compilation add -lm .i.e gcc hpo.c -o hypo -lm
 *to make this code in one line
 *double C = sqrt((A*A) + (B+B));
 *printf(%f, C);
 */

int main()
{
	double A;
	printf("please enter thr value for A: ");
	scanf("%lf", &A);

	double B;
	printf("please enter the value for B: ");
	scanf("%lf", &B);

	double C = A * A;
	double D = B * B;
	double E = C + D;
	
	double result;
	result = sqrt(E);

	printf("The hypotenuse of right traingle is: %f\n", result);

	return 0;
}

