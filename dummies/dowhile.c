#include <stdio.h>

/** A do while loop is used when we want a particular part of the code to run or execute at least once before the conditions are read or mer
 *
 */

int main()
{
	 int fibbo= 0;
	 int nicco = 1;

	 do
	{
	printf("%d\t", fibbo);
	fibbo = fibbo + nicco;
	printf("%d\t", nicco);
	nicco = nicco + fibbo;
	}while(nicco < 300);

	 putchar('\n');
	return 0;
}
