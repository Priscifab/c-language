#include <stdio.h>

/** breaks are used rk vet out of loops earlier without for it to the loop to run till the ens
 *if i == 6 : this means that the loo should break a 6 not untill it gets to 60
 * and also since i < 60, even if i == 70, the looping wouldnt go through tk 70 rather it would brean at the designation 60
 */
int main()
{
	for(int i = 0; i < 60; i++)
	{
		printf("Hello there\n");
		if(i == 10)
		{
		break;
		}
	}

	return 0;
}
