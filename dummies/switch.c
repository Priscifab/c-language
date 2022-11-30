#include <stdio.h>
/** main - a swtich statement is similar to an if satement
 * the case value is matched with the user input
 * break: is necessary it tells the computer stop after a code is executed and not fall through
 */

int main()
{
	int slices;
	printf("Enter the slices of pizza you ate today:\n ");
	scanf("%d\n", &slices);

	switch(slices)
	{
		case 1:
			printf("you did a great job");
		break;

		case 2: 
			printf("you tried a bit");
		break;

		case 3:
			printf("you did a bad job");
		break;

		case 4:
			printf("you are not concerned for your health");
		break;

		default:
			printf("you are joking with your health");
		break;
	}
	return 0;
}
