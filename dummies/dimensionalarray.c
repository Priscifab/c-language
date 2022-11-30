#include <stdio.h>
#define SIZE 3

// this method from c for dummies joins ve texts as one on a single line
int main()
{
	char presi[SIZE][8] =
	{
		"clinton",
		"bush",
		"obama"
	};

	int x, index;

	for(x=0; x<SIZE; x++)
	{
		index = 0;
		while(presi[x][index] != '\0')
		{
			putchar(presi[x][index]);
			index ++;
		}
	}
	putchar('\n');

	//or better still
	
	//char lang[5][20]; 
	//5 here reoresents the size by row while 20 reresents lenght of strinf by colum
	char lang[][20] =
	{
		"Kenneth Haggin",
		"python",
		"c++"
		"html",
		"sql"
	};

	puts("languages are");

	for(int x=0; x<5; x++)
	{
		puts(lang[x]);
	}
	

//getting the input from the user we  can do

	char names[10][20];
	int i, number;

	printf("how many names do you want to enter: ");
	scanf("%d", &number);

	printf("enter %d names here\n", number);
	for(i = 0; i<=number; i++)
		//scanf("%s", names[i]);
		fgets(names[i], 20, stdin); // i want it read or accept space

	puts("here are the names you entered");
	for(i=0; i<=number; i++)
		// printf("%s\n", names[i]); OR
		puts(names[i]);
	putchar('\n');

	return 0;
}
