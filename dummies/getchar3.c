#include <stdio.h>
/**
 *
 *
 */

int main()
{
	char first, second;
	printf("type ur fuirsr: ");
	first = getchar();
	
	getchar();
//withiout this middle getchar, after d user enters the first, there would be n
//opportunity for the user to type the second input cuz immediately d user presses
//enter the next getchar accepts enter as an input
//so to avoid this i out another getchar in d middle of two getchars to collect the
//enter between them

	printf("second : ");
	second = getchar();

	printf("your initials are %c %c", first, second);

	putchar('\n');;

	return 0;
}
