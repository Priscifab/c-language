#include <stdio.h>

/** the true advantage of typedef is thag it saves us the stress or srtuct repeatedly
 *
 *
 */

int main()
{
	typedef struct
	{
		int month;
		int day;
		int year;
	}birthday;

	birthday date;


	typedef struct 
	{
		char name[30];
		char last[30];
		birthday date;
	}human;

	human person;

	//person.name = " aint workibt"; its not working says char is not assignable 
	strcpy(person.name, "prisv igo");
	person.date.month = 4;
	person.date.day = 14;
	person.date.year = 1999;

	printf("%s was born on %d %d %d\n", person.name, person.date.month, person.date.day, person.date.year);


	return 0;
}
