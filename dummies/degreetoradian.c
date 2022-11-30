#include <stdio.h>
#include <math.h>

/**
 *
 */

int main()
{
	float degree,  radian;

	printf("enter a number in degree: ");
	scanf("%f", &degree);

	radian = 0.0174532925 * degree;
	printf("the degree %.f is now %f radian\n", degree, radian);


/**from radian to degree
 */

	float radians, degrees;
	printf("enter a radian : ");
	scanf("%f", &radians);

	degrees = (float)radians/0.01745;

	printf("the radian %f is now %f°\n", radians, degrees);
	
	return 0;
}
