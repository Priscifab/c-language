#include <stdio.h>

/**
 *unary operators ++(increment) and --(decrement) change rhe vlaue of the operands either increase the value by 1 or decrease
 *
 * output- before 1 is added to pizza itbis first assignef to output
 
 */

int main ()
{
	int pizza = 100;
	printf("pizaa: %i\n", pizza);

	pizza += 100;
	printf("plus: %i\n", pizza);
	
	pizza -= 100;
	printf("minus: %i\n", pizza);

	pizza *= 100;
	printf("times: %i\n", pizza);

	pizza /= 100;
	printf("divide: %i\n", pizza);
	return 0;
}
