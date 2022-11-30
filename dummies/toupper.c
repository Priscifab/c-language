#include <stdio.h>
#include <ctype.h>

/**
 *
 *
 */

int main()
{
	char answer;
	printf("do you want to bloww the moon(yes or no): ");
	scanf("%c", &answer);

	answer = toupper(answer);
	if(answer == 'Y')
		puts("BOOM!");
	else
		puts("you are confused");

	char phrase[] = " rihd jdrhdgd fkeuheged dkdhdg";
	int index = 0;

	/*to print the variablw  phrase in uppercase leters we use toupper() but it cant accept a strings like toupper(phrase); or toupoer(phrase[index] only singkle characters so we have to looo through to print it  so we creat a single caracter of variable ch*/                                                                                                         char ch;
        puts("toupper convert");

        while(phrase[index])
        {
                ch = phrase[index];
                //printf("%c", toupper(ch));
		//or simply
		putchar(toupper(ch));	
	

                index++;
        }

	return 0;
}
