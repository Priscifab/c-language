#include <stdio.h>

int main()
{
	printf("1.Add a patient\n");
	printf("2.View a patient\n");
	printf("3. Search a patient\n");
	printf("4. Exit\n");

	int input;
	printf("please enter a menu number: ");
	scanf("%d",&input);

	if(input == 1)
	{
		printf("Add a patient\n");
        } else if(input == 2)
	{
		printf("view a patient\n");
	} else if(input == 3)
	{
		printf("Search a patient\n");
	} else if (input == 4)
	{
		printf("Exit\n");
		printf("Do you want to save the changes Y/N: ");
		char q;	
		getchar();
		scanf("%c", &q);
		
		if ( q == 'Y' || q == 'y')
		{
			printf("saving your changes\n");
		} else if(q == 'N' || q == 'n')
		{
			printf("i would advice you save changes,\n");
		} else
		{
			printf("choose yes or no\n");
		}
	} else 
	{
		printf(" sorry wrong input\n");
	}
}
