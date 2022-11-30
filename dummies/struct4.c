#include <stdio.h>
/**
 *
 */

int main()
{
	struct president
	{
		char name[30];
		int year;
	};
	struct president first = 
	{
		"George Washington",
		1989
	};

	printf("the name of the president is %s\n", first.name);
	printf("he was inaugurated in the year %d", first.year);

//this is another way of intializing without using {} but it can be done individually
	struct president second;
	second.year = 32;

	printf("the second was in the year %d", second.year);

	putchar('\n');
	return 0;
}
