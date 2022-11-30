#include <stdio.h>
#include <string.h>

/** if i dont want a case sensitive condition i can use strcasecmp instead 
 *
 */

int main()
{
	char input[15];
	char password[] = "TACO";

	puts("password: ");
	scanf("%s", input);

	//int match;
	//match = strcmp(input,password);
	//if(match == 0);
	//OR

	//if match is true(0)  vice versa  1 or any other number if its false
	if(strcmp(input,password) == 0)
	{
		puts("password is accepted");
	}else
	{
		puts("u are a thief");
	}


//strcat() means concatenate, i.e linking togeda
//strcat(first, last) here the contents of last gets added to the end of first
//so the firsr array needs to be larger than the last in size[40]

	char first[40];
	char last[20];

	puts("firstname: ");
	scanf("%s",first);
	
	puts("lastname: ");
	scanf("%s", last);
	

	strcat(first , last);

	printf("%-4s", first);

	putchar('\n');



//the code above althogh givea us the desired results
//but when it displays it dosent separate the outputs (firstsecond)
//so so to concatenate a space between them we creat a new variable
//and copy the first inout into it



	char third[40];
	char fourth[20];
	
	puts("name: ");
	scanf("%s", third);

	puts("last: ");
	scanf("%s", fourth);

	char scapegoat[45];

	strcpy(scapegoat, third);
	strcat(scapegoat, " ");
	strcat(scapegoat, fourth);

	printf("nice to know you %s", scapegoat);

	putchar('\n');


// or without concatenaing

	char name[16];
        char last[16];

        printf("enter your first name: ");
        scanf("%15s", name);
        printf("enter yiur last name:");
        scanf("%s", last);



        printf("nice to meet %s %s",name, last);

        putchar('\n');




	return 0;
}
