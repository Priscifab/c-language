#include <stdio.h>
#include <stdlib.h>

#define SIZE 40
/**
 *
 */

int main()
{

        int bubble[SIZE];
        int inner, outer, x, temp;

        puts("orinal bubble");
        for(x=1; x<100; x++)
		srand(SIZE);
		bubble[x] = rand();
                printf("%d\t", bubble[x]);
                putchar('\n');

        for(outer=1; outer<SIZE; outer++)
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
        for(x=1; x<100; x++)
        {
                printf("%d\t", bubble[x]);
        }
	putchar('\n');

        return 0;
}
