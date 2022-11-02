#include <stdio.h>


/** notes : in while loops we do not place the i++ before the print statement, as this would alter the value of i by addition kf 1 befkre the interoreter reads the printf statement. if we make that mistake the output of this code will be 1 2 3 .... 10 instead of 0 1 2 3 ... 9
 */
int main()
{
	int i = 0;
	while(i < 10)
	{
	printf("%d\n", i);
	i++;
	}
return 0;
}
