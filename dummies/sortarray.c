#include <stdio.h>

#define SIZE 6

/**
 *
 *
 */

int main()
{
	int bubble[]= {97, 60, 6, 87, 50, 20};
	int inner, outer, x, temp;
	
	puts("orinal bubble");
	for(x=0; x<SIZE; x++)

		printf("%d\t", bubble[x]);
		putchar('\n');

	for(outer=0; outer<SIZE-1; outer++)
	{
		for(inner=outer+1; inner<SIZE; inner++)
		{
			if(bubble[outer] > bubble[inner])
			{
				bubble[inner]= temp;
			 	bubble[outer] = bubble[inner];
				bubble[inner] = temp;
			}
		}
	}	
	puts("sorted bubble");
	for(x=0; x<SIZE; x++)
	{
		printf("%d\t", bubble[x]);
	}
	return 0;
}
