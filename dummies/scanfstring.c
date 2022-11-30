#include <stdio.h>

/** in this array if the user inputs a name with space inbtw
 *the printf will only display the letters before the space
 *and if the limit specified by the array is char[10] if the inout is longer than this it would display a segmenntation fault
 so to avoid segmentation fault we restrict it at rhe scanf level
 * scanf"(%9s") this is done so that if a user inputs characters more than 9 it would only display the first 9
 *and its restircted to 9 not 10 cuz of the null \0 that is reserved for the end of the string
 * i put getchar in between the 2 printf statements so that the prompt will diaplay one at at time. this is cuz the scanf stops reading text inputs at the first whitespace, tab or enter key
 *but all goes as planned except for the fact when the printf sisplays the output it ommits the first letter
 */

int main()
{
	char firstname[10];
	char lastname[10];
	
	printf("type your full name: ");
	getchar();	
	printf(" please enter your lastname: ");

	scanf("%9s%9s", firstname, lastname);
	printf("pleased to meet you %s %s\n", firstname, lastname);
	return 0;
}
