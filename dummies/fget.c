#include <stdio.h>

/** fgets function is a general purpose text input functions
 *it can read input of files, it doesnt have the limitation of scanf
 *it can read whiteslaces, tabs etc
 *stdin rep the standard input from which d file is read
 *although the name[10] specifies 10 but it only accepts 9 characters cuz of the strings terminating character null
 *people rather use fgets instead of gets cuz gets does not soecify a limit for user input it is infinite. as a result that is dangerous as it cam cause over writing to the memory
 *gets is fgets evil sibling
 *scanf reads input from the keyboard but fgets reads text from standard input not from the keyboard directly
 *
 */

int main()
{
	char name[50];

	printf("cam i get to know you: ");
	fgets(name, 50, stdin);
	printf("glad to meet you %s.\n", name);

	return 0;
}
