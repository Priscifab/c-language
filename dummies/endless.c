#include <stdio.h>

/**while(1) or any other figure, without any condition atached is an endless loop
 *to stop this we use break
 */

int main()
{
	int count = 0;

	while(1)
	{ 
		printf("%d\t", count);
		count = count + 1;

		if(count > 50)
		break;
	}
	putchar('\n');

/** using a for loop to do achieve the same
 *notice that the for looo has no condition only initialization and update
 */

	int court;

	for(court = 0; ; court = court + 1)
	{
		printf("%d\t", court);
	if(court > 75)
	break;
	}
	putchar('\n');
	return 0;
}
