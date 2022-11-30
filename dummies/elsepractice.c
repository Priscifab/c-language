#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("1.Add a patient\n");
	printf("2. View a patien\n");
	printf("3. Search a patient\n");
	printf("4. Exit\n");

	int input;
	printf("Please choose from the list: ");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("Adding a new patient\n");
	}else if (input == 2)
	{
		printf("view a  patient\n");
	}else if (input == 3)
	{
		printf("Search for a patient\n");
	}else if (input == 4)
	{
	printf("exiting\n");
	printf("Would you like to save changes Y/N: ");
	
	char l;

	scanf(" %c", &l);

	char q = toupper(l);
		
		if (q == 'Y')
		{
			printf("saving changes\n");
		}else if (q == 'N')
		{
			printf("I would advice you save changes\n");
		}else
		{
			printf("chosee yes or no\n");
		}	
	}else
	{
	printf("sorry wrong input\n");
	}
}

