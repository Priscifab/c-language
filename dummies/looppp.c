#include <stdio.h>

/**here the user input must be higher than 0, 
 *so that i++ will increment from 0 to thst user input
 *sum i + 4 this means that the output displayed will begin at number 4 then, from 4 to that number the user inputed then + 4 numbers a gain added to d input
 *so if the user input is 7, the output will be 4, 5, 6, 7 then + fournumbersv 8, 9, 10, 11
 */
int main()
{
	int sum;
	int i;
	int max;
	
	printf("enter loop number: ");
	scanf("%d", &max);
	for(i = 0; i <= max; i++)
	{
		printf("%d\n",sum = i + 2);
	}
	return 0;
}

