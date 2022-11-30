#include <stdio.h>
#include <math.h>

/** array2[] prints the square root of the members of array1
 *
 */

int main()
{
	int array1[] = {10, 12, 15, 18, 20};
	float array2[5];
	int x;
	for(x=0; x < 5; x++)
	{
		array2[x] = sqrt(array1[x]);
		printf("the sqrt of %d is %f\n", array1[x],  array2[x]);
	}
	return 0;
}
