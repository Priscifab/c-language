#include <stdio.h>

/**this code will print the asci numbers in letters and numbers
 *
 */

int main()
{
	char alphabet;

	for(alphabet = 'A'; alphabet <= 'Z'; alphabet = alphabet+ 1)
	{
		printf("%c\t", alphabet);
		printf("%d\t", alphabet);
	}
	putchar('\n');

/**or we can do a for loop inside of a for loop
 *
 */

	char alphab;
	char alphabe;

	for(alphab = 'A'; alphab <= 'Z'; alphab = alphab + 1)
	{
		for(alphabe = 1; alphabe <= 26; alphabe = alphabe + 1)
		{
			printf("%c%d\t", alphab, alphabe);
		}
		putchar('\n');
	}

/**A loop that counts backwards
 *in lower case letters
 *z >= alpha is similar to alpha <= z
 */

	char alpha;
	
	for(alpha = 'a'; 'z' >= alpha; alpha = alpha -1)
	{
		printf("%c\t", alpha);
	}
	putchar('\n');

/** a code that wll print AAA to ZZZ
 *
 */

	int letter1, letter2, letter3;
	
	for(letter1 = 'A'; letter1 <= 'J'; letter1 = letter1 +1)
	{
		for(letter2 = 'A'; letter2 <= 'J'; letter2 = letter2 + 1)
		{
			for(letter3 = 'A'; letter3 <= 'J'; letter3 = letter3 + 1)
			{
			printf("%c%c%c\t", letter1, letter2, letter3);
			}
		}
		putchar('\n');
	}
	return 0;
}
