#include <stdio.h>

/** strings are character arrays
 *all strings must always have a null character \0 at the end, the null is used tk terminate a string. 
 *so setting a size for a string without considering the null can produce indefinite results
 *ex. char [6] = 'hello(\0)' not char [5]= 'hello' 
 * scanf - "%49s" when dealing with user input to regulate the length of input ee add the length to the string coversion character, sk that even when the user inputs a string longer than the length it would crop it
 * 
 */

int main()
{
	char favFood[50];
	printf(" what is your favorite food? ");
	scanf("%49s", favFood);

	printf("%s\n", favFood);

/** to get the length of a string we create a variable to loop through
 *while - the variable count should not be equal to \0, so that it wouldnt be added to the count
*printf - should come after the } of the while loop, if its inside it it would write them indiviually instead if giving the total count
*/

	int charCount = 0;
	
	while(favFood[charCount] != '\0')
	{
		charCount++;
	}
	printf("the length of your food is %d\n",  charCount);

/**we can use the function strlen already built in the header file #include <string.h> 
 */

	int countChar = strlen(favFood);
	
	printf("the length of favorite is %d\n", countChar);
	
	return 0;
}
