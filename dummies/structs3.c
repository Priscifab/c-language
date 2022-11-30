#include <stdio.h>
/**
 *
 */

int main()
{
	struct info
	{
		char name[30];
		int score;
	};

	struct info detail;

	printf("enter your name: ");
	scanf("%s", detail.name);
	//fgets(detail.name, 30, stdin);
	printf("ebter your score: ");
	scanf("%d", &detail.score);

	printf(" Hey %s, this js ur score %d", detail.name, detail.score);

	putchar('\n');

	return 0;
}
