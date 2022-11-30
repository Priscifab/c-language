#include <stdio.h>
/** using putchar(text[x] would lead to an endless loop of letter r
 *
 *
 */
int main()
{
	char text[] = "random message";
	
		printf("%s", text);
	putchar('\n');

	return 0;
}
