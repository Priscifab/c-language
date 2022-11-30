#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** the randon values genrated will alwaya be the same if we do not attatch the random number to sth that changes constanly to determine
 *a new value every time the program is run
so we can attach to time
we must include the time.h
 *the Srand() is a random number generator
 *
 */

int main()
{
	int r, a ,b;
	for(a= 0; a <=10; a++)
	{
		for(b=0; b<5; b++)
		{
			srand(time(NULL));
			r = rand() % 20;
			printf("%d\t", r);
		}
	}
	putchar('\n');

/** generating a random number that is no predictable yet not attached to time
 *we get d input from d user
 */
	int x, y, z;
	unsigned seed;
	printf("sow ur seed here : ");
	scanf("%u", &seed);

	for(x=0; x<=10; x++)
	{
		for(y=0; y<5; y++)
		{
			srand(seed);
			z = rand();
			printf("%d\t", z);
		}
	}

	return 0;
}

