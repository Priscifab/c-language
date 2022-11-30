#include <stdio.h>

/**
 *
 *
 */

int main()
{
	int x;
	
	for(x=0; x < 10; x =x+1)
	{
		printf("%dscore is high\n", x);
	}

/**here the output will be 5, cuz 5 is less than 6
 *and the condition says less than 6 not <= so there is no way for it to increment further above thr condition
 */
	int count;

	for(count = 5; count<6; count =  count +1)
	{
		printf("%d\n", count);
	}

/**
 *
 */

	int court;
	int court2 = 19;

	for(court = 11; court <= court2; court = court + 1)
	{
	printf("%d\t%d", court, court2);
	}

/** the \t tab space in printf will arrage the output vertically
 *
 */

	int duo;
	for(duo = 0; duo <= 100; duo = duo + 2)
	{
		printf("%d\t", duo);
	}
	putchar('\n');

	return 0;
}

