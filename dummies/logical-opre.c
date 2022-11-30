#include <stdio.h>

/** this code is using multiple comparisons with logic
 *the logical AND is rep by two ampersands &&
 *the logical OR is rep b two pipes or vertical bar characters
 */

int main()
{
	int cordinates;
	printf("enter a cordinate: ");
	scanf("%d", &cordinates);

	if(cordinates >= -5 && cordinates <= 5)
	{
	printf("target close enough\n");
	}else if(cordinates >= -6 || cordinates <= 20)
	{
	printf("target out in higher range\n");
	}else
	{
	printf("target out of range:");
	}

	return 0;
}
