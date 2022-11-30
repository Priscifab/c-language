#include <stdio.h>

int main()
{
	int tic[3][3];
	int x, y;

	for(x=0; x<3; x++)
	{
		for(y=0; y<3; y++)
		{
			tic[x][y] = '.';
			tic[1][1] = 'x';
		}
	}

	puts("display tictsmac");
	for(x=0; x<3; x++)
	{
		for(y=0; y<3; y++)
		{
			printf("%d\t", tic[x][y]);
		}
	}
	putchar('\n');

	return 0;
}
