#include <stdio.h>

/**
 *
 *
 */

int main()
{
 	char code;
	puts("enter a code error from (A-D): ");
	scanf("%c", &code);

	switch(code)
	{
	case 65:
	puts(" dirvers fault");
	break;

	case 66:
	puts("vehicle malfunction");
	break;

	case 67:
	puts("Do you have license?");
	break;

		default:
		puts("enter a valid input");

	}
	return 0;
}
