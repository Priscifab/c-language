#include <stdio.h>

/** note: if we one forgets to do the update (i++), it would lead to an infinite loop of zeros 0, cuz ee are not telling it to wdirection to loop up kr down 
 * we need to initialize k which is the 2nd vairable before thr 2nd while loop
 */

int main()
{
	int i = 0;
	while(i < 11)
	{
		int k = i -1;
		printf("%d ", i);
		i++;
		while(k >= 0)
		{
		printf("%d ", k);
		k--;
		}
		printf("\n ");
	}
	return 0;
}
