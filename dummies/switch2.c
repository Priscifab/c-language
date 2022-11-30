#include <stdio.h>

/** the Ascii character a is 65 so if a user inputs 65 it would display not sure sir
 *likewise \n if the user inouts 10 it would read nawa o
 *
 */

int main()
{
	int code;
	printf("enter the error code (1-3): ");
	scanf("%d", &code);

	switch(code)
	{
		case 1:
		puts("Drivers fault");
		break;
		
		case B:
		puts("vehicle falure");
		break;

		case 'A':
		puts("not sure sir");
		break;

		case '\n':
		puts("nawa o");
		break;
	
		default:
		puts("enter value between 1 to 3");
	}
	return 0;
}
