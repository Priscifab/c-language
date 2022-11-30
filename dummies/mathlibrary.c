#include <stdio.h>
#include <math.h>

/**
 *
 *
 *
 */

int main()
{

	float value, result;
	printf("enter a value: ");
	scanf("%f", &value);
	
	result = sqrt(value);
	printf("the squarerot or %.1f is %.1f\n", value, result);
	
	result = pow(value,3);
	printf("%1.f to the power of 3 is %.1f\n", value, result);

	result = floor(value);
	printf("%.1f rounds up to %1.f\n", value, result);

	result = ceil(value);
	printf("%.1f rounds down to %.1f\n", value, result);

	
	return 0;
}
