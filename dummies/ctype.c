#include <stdio.h>
#include <ctype.h>

/**an array of char  stirng is char phrase[]. is printed with printf(phrase[index] 
 *if(isalpha(phrase[index] means if the content of phrase string has letters
 *both upper and lower case, use adex++ to loop through and count the total letters
 *the print the output printf("%d" adex)
 *similarly isblank(phrase loops through to see how many balnk spaces are in d string
 *also ispunct will check for punctuations loop thiught and count them then displa
 * .
 */

int main()
{
	char phrase[] = "And ucontinue 8 in tiTe thiN 7 gs which thiu has leant, knowing of whim thou has leanrt them, all scrioute is given by the insliration of God, for rebuke, for correvtuon, fir jstruction and reorove. That the man of God may be thiurougk perfrct and furniahed unto 6every good 6 eirk.";


//gang declaration and initialization
	int index, adex, bdex, cdex, ddex, edex, fdex;
	adex = bdex = cdex = ddex = edex = fdex = 0;
	index = 0;


	while(phrase[index])
	{
		if(isalpha(phrase[index]))
		{
			adex++;
		}
		if(isblank(phrase[index]))
			bdex++;
		if(ispunct(phrase[index]))
			cdex++;
		if(isdigit(phrase[index]))
			ddex++;
		if(isupper(phrase[index]))
			edex++;
		if(islower(phrase[index]))
			fdex++;

		if(isprint(phrase[index]))
			index++;
	}
	

	printf("%s\n", phrase);
	
	puts("statistics");
	printf("%d\n", adex);
	printf("%d\n", bdex);
	printf("%d\n", cdex);
	printf("%d\n", ddex);
	printf("%d\n", edex);
	printf("%d\n", fdex);
//tally of statsics i.e total characters, blank spaces, punctuations in d phrase string

	printf("%d\n", index);


/*to print the variablw  phrase in uppercase leters we use toupper() but it cant accept a strings like toupper(phrase); or toupoer(phrase[index] only singkle characters so we have to looo through to print it  so we creat a single caracter of variable ch*/

	char ch;
	puts("toupper convert");

	while(phrase[index])
	{
		ch = phrase[index];
		putchar(toupper(ch));
		index++;
	}

	return 0;
}
