#include <stdio.h>

/** %f - for decimal notations ex 25000
 * %e scientific notation ex 25e4 i.e 2.5x10 ∆5
 *%g the computer decides where to place it either as decimal or scientific notation
 *
 *
 */

int main()
{
	/*2500*/
	double dog;
	printf("how many dogs do you have?: ");
	scanf("%lf", &dog);

	printf("%f\n%e\n%g\n", dog, dog,dog);

	return 0;
}
