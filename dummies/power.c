#include <stdio.h>
#include <math.h>

/**this code will print from 2° to 2^10
 * 
 */

int main()
{
	float value, i;
	value = 2;

	for(i = 0; i<=10; i++)
	{
		printf("the value of %.1f raise to power of %.1f is floor%.1f\n", value, i, pow(value,i));
	}

	return 0;
}

/*but initially when i did it like this it didnt work
 */

//float value, result;
//
//value = 2;
//
//for(result= pow(value, 0); result <= 10; result++)

