#include <stdio.h>

/** printf(....x+1 cuz the array starts at 0, and i mean to ask the user the #1 score
 * used <4 not <= 4 cuz array starts counting at 0. so x<4 would reques for inpt 5 times
 */

int main()
{
	int score[4];
	int x;
	for(x=0; x<4; x++)
	{
		printf("enter  #%d score\n", x+1);
		scanf("%d", &score[x]);
	}
	for(x=0; x<4; x++)
	{
		printf("your #%d score is %d\n", x+1, score[x]);
	}

	return 0;
}
