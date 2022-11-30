#include <stdio.h>

/**
 *
 */

int main()
{
	char i;
	do
	{
	i = getchar();
	putchar(i);
	} while(i != '.');// print any text thats comes before . dot 
	
	putchar('\n');
// after the first one runs and prints successfully but the 2nd while runs and refuses to end not display
	char z;
	{
	z = getchar();
	putchar(z);
	} while(z != '?');
	putchar('\n');

	return 0;
}
