#include <stdio.h>
#include <ctype.h>

/**the ctype.h is a headerb file that can allow us use toupper
 *touopper is used to make our code case insensitive
 *such that when a user enters a lowwer case letter a instead of A
 *it would be recognized as A or a
 * i deliberately ommited the break; to allow a fall through
 *
 */

int main()
{
	char choice;
	puts("choose from the meal menu");
	puts("A Rice for breakfast");
	puts("B beans and pap for lunch");
	puts("C yam for dinner");
	printf("make a decision: ");
	scanf("%c", &choice);
	
	printf("you have opted for ");
	switch(toupper(choice))
	{
		case 'A':
		printf("breakfast\n");

		case 'B':
		printf("lunch\n");

		case 'C':
		printf("dinner\n");

		default:
		printf("opt for a choice\n");

	}
	return 0;
}
