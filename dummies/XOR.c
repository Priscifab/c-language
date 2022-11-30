#include <stdio.h>
#include <math.h>

/**
 *
 *
 */

int main()
{
	int a, b;
	a = 4, b = 3;

	a  = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a is %d b is %d\n", a, b);
	

	return 0;
}
