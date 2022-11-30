#include <stdio.h>

/** we cant have sth like this in a nesed loop
 *otherwise it woould lead to an endles loop
 *so we need to separate the loop so they can run seperately
 */

int main()
{
	int c;
	for(c = -5; c < 5; c++)
	{
		printf("%d ", c);
	}

	for(c = 5; c >= -5; c--)
	{
		printf("%d ", c);
	}
	putchar('\n');

	int d;
	d = -10;
	while(d <= 10)
	{
		printf("%d ", d);
		d++;
	}
	return 0;
}
