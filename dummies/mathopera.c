#include <stdio.h>

/**
 *
 *
 */

int main()
{
	int x;
	for(x = 0; x <= 10; x++)
	{
		printf("get off my propery\n");
	}

	//didnt work
	char yar[8] = "get out";
	int i;
	for(i= 0; i <= 10; i++)
	{
		putchar(yar[i]);
	}
	putchar('\n');
	return 0;
}
