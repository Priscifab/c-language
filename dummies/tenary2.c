#include <stdio.h>
#include <stdbool.h>
/**the format looks like comparison(var>var2) ? if true : if false
 *large = a>b ? a: b
 * this code says if thr value of a is lager than b print a is karger than b, and even if it is vice versa that the value of b ia larger than a then still print b is larger than a
 *the brackets is not necessary it just for clarification
 *
 */

int main()
{
	 int a, b, large;

	 printf(" enter the value for A: ");
	 scanf("%i", &a);

	 printf("enter the value for b: ");
	 scanf("%i", &b);

	 large = (a>=b) ? a : b;
	 printf("%d is larger\n", large);


/**using an if else statement
 *
 */
	 int c, d, small;

	 printf("enter the value for c: ");
	 scanf("%i", &c);

	 printf("enter the value for d: ");
	scanf("%i", &d);

	small = c <= d;

	if(small == 1)
	{
		small = c <= d;
		printf("%d is less than %d\n", c, d);
	}
	else
	{
		printf("%d is less than %d\n", d, c);
	}
	return 0;
}
