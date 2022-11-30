#include <stdio.h>
/** this is a nested struct
 *to access a struct inside another struct we do struct_ varaible_name.member_struct_variable_name.member_of_struct_member i.e person.date.month not person.birth.month
 */


int main()
{
	struct birth
	{
		int month;
		int day;
		int year;
	};
	struct human
	{
		char name[20];
		struct birth date;
	};
	struct human person;

	//strcpy(person.name, "priscilla igo");
	person.name = "priscklla igo";
	person.date.month = 4; // if u put 0 be4 d 4 it will be ignored 04
	person.date.day = 14;
	person.date.year = 1999;

	printf("%s was born in %d %d %d", person.name, person.date.month, person.date.day, person.date.year);

	putchar('\n');

	return 0;
}
