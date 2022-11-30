#include <stdio.h>

/**
 *
 *
 */

int main()
{
	int a, b;
	a = 6;
	b = a + 2;
	if(a > b)
	{
	printf("%d is greater than %d\n", a, b);
	}

	int first, second;
	printf("enter the fisrt value: ");
	scanf("%d", &first);
	printf("enter the second value: ");
	scanf("%d", &second);

	puts("Evaluating......");

	if(first > second)
	{
		printf("%d is greater than %d\n", first, second);
	}else
	{ 
		printf("%d is not greater than %d\n", first, second);
	}


	if(second > first)
	{
		printf("%d is greater than %d\n", second, first);
	}
	return 0;
}
