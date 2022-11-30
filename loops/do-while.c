#include <stdio.h>

/**we do no declare or initialize inside of a do, rather before the do
 * basic do while format or structure
 * intitialization
 * do
 * {
 * 	code
 * 	update
 * 	}while();
 * 
 * do while is used for input validation such that if a user is instructed to enter a value within a particular range, but if the user does otherwise or does not out in the correct value, then do while keeps asking until they do
 */

int main()
{
	int input;
	do
	{
	printf("enter a value between 0-9: ");
	scanf("%d", &input);
	}while(input >= 0 || input <= 9);
	return 0;
}
