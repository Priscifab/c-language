#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**argc - argument count, while argv is argument vector(an array ot strings)7
 *argc counts or tell us how many arguments have been passed. it rep d num of tinz entrrred into d command line
 *char* argv is an array that holds the string values of the text or tings that entered
 */

int main(int argc, char* argv[])
{
	printf("argc =%d\n", argc);
	int i, sum;
	if(argc>1)
	{
	for(i= 0; i<argc; i++)
		{
		printf("the [%d] text or string passed into argv is %s\n", i, argv[i]);
		}
	
	sum = sum +  atoi(argv[i]); // this is to convert d string to an integer
	}
	printf("%d\n", sum);

	return 0;
}
