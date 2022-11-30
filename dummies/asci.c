#include <stdio.h>

/**unlike printf or puts, putchar can only display one character at a time
 * dont know why i would like to use it yet
 *i couuld say press enter on line 21 cuz enter is recognized by putchar as a character 
 *
 */

int main()
{
	char a, b, c, d;

	a = 'y';
	b = 2 + 24;
	c = 'A';
	d = '\n';

	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
	printf("%c\n%c\n%c\n%c\n", a, b, c, d);
	
	putchar(a);
	putchar(c);
	putchar(d);

	printf("press enter: ");
	getchar();
	char ch;
	ch = 'H';
	putchar(ch);
	putchar('!');
	putchar('\n');


	int e;
        printf("i am wating for a value: \n");
        e = getchar();
        printf("your single character is %d\n", e);


	return 0;
}
