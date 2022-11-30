#include <stdio.h>
/**This is an array of structs
 *player is d name of the array for the sruct record
he array player has 5 variabkles [4] as arrays start counting at 0 not 1. so player[0] is the first variable of the arrag
 *
 *for an array variable to access a member of d struct we do
//player[0].name
 */

int main()
{
	
	struct record
	{
		char name[20];
		int score;
	};
	
	struct record player[4];
	int x;

	for(x=0; x<4; x++)
	{
		printf("enter the %dst name here", x+1);
		scanf("%s", player[x].name);
		printf("enter his score");
		scanf("%d", &player[x].score);
	}

	puts("players info");
	printf("number name score\n");
	for(x=0; x<4; x++)
	{
		printf("%d\t%s\t%d\n", x+1, player[x].name, player[x].score);
	}
	putchar('\n');



	return 0;
}

