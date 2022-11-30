#include <stdio.h>

int main()
{
	int slices;
	printf("how many slicesbkf pizza last night");
	scanf("%d\n", &slices);

	if (slices == 1)
	{
		printf("you try sha\n");
	} else if (slices == 2)
	{
		printf("keep up the discipline");
	} else if (slices == 3)
	{
		printf("not good enough");
	} else
	{
		printf("if u like kill yourself");
	}

	return 0;
}
