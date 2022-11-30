#include <stdio.h>

/**the output for the printfs in the main will be 365
 *this is cuz even though we called the function vegas(); into the main
 *the value of a(-10) in vegas cannot replace the value the a(365) in main 
 * variables are local to their functions,
 *one function cannot change the value of a variable in another function even if they have the same variable names
 *so this implies that we can use the same variable name for as many functions as we want, and none of the variable names will know of the existence of each other
 */

void vegas(void);

int main()
{
	int a;

	a = 365;
	printf("in the main function a=%d\n", a);
	vegas();
	printf("in the 2nd main function a=%d\n", a);

	return 0;
}

void vegas(void)
{
	int a;

	a = -10;
	printf("the vegas function, a =%d\n", a);
}
