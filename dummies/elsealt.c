#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("1.Add a patient\n");
	printf("2.View a patient\n");
	printf("3. Search a patient\n");
	printf("4. Exit\n");
	
	int input;
	printf("please enter a menu number: ");
	scanf("%d", &input);

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
		printf("exiting\n");
		printf("Do you want to save the changes Y/N: ");

		char l;
		
                scanf(" %c", &l);

		char q = toupper(l);		      

                if (q == 'Y')
                {
			printf("saving your changes\n");
			
                } else if(q == 'N')
                {
			printf("i would advice you save changes,\n");
		} else
                {
                        printf("choose Y  or N: \n");
		}
	} else
	{
		printf(" sorry wrong input\n");
	}
}
