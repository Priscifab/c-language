#include <stdio.h>
/**
 *
 *
 */

int main()
{
	int B[100], i, n, j;

	printf("conver decimal to binary here: ");
	scanf("%d", &n);

	i = 0;
	while(n>0)
	{
		B[i] = n%2;
		n = n/2;
		printf("%d", B[i]);
		i++;
	}
	puts("\nanswer from buttom to top");
	for(j = i-1; j >=0; j--)
	{
		printf("%d", B[j]);
	}

	putchar('\n');

	int num, i, power[50], sum;
	printf("enter your value here: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)
	{
		power[i] = pow(2, i);

	printf("%d", power[i]);

	return 0;
}
