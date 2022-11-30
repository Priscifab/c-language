#include <stdio.h>

/*we can only assign arrays once ,
 *unlike variables which can be reassigned and overrides the lrevious values
 *so promot = "this is not possibl"e is actually not possible with strings 
 *
 */

int main()
{
	char prompt[] = "A program to destroy the world\npress enter to explode: ";
	//prompt ="this is not possible";

	printf("%s", prompt);
	getchar();

	return 0;
}
