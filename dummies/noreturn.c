#include <stdio.h>
#include <stdbool.h>

/**this function limit doesnt return a value that is y puts is used and not printf
 *therefore void os used, it void was not indicated d compiler would request for a return value
 *
 */

void limit(int stop)
{
	int x;
	for(x= 0; x <= 100; x= x + 1)
	{
		if(x==stop)
		{
			puts("true, you won\n");
			return;
		}
	}
	putchar('\n');
}

//the function verify would check if input is below 100
void verify(int ver)
{
	if(ver<=100)
	{
	puts("on the right track\n");
	}
	else
	{
		puts("way to high error\n");
	}
	
}


//it doesnt matter if we  call verify first before limit
//either way it would work
int main()
{
	int s;
	printf("enter a value");
	scanf("%d", &s);
	
	limit(s);
	verify(s);
	return 0;
}
