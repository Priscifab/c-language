#include <stdio.h>
/**to get a proper looo that prints from 0..10: we place the iteraion after the printf
 *but if we place the update before d printf it would read 1 to 11 
 *but if we add it in both places i.e before and after i would be 1, 3,5, 7, 8, 11 (i dont know y)
 *
 */

int main()
{
	int x;
	x = 0;

	while(x<=10)
	{
		//x = x + 1; (wrong position)
		printf("%d\n", x);
		x = x + 1;
	}

/** this code although will compile but will not run cuz the 
 *condition is impossible, 14 cannot be less than 10
 */
	int y;
	for(y=14; y<=10; y = y+1)
	{
		printf("%d\n", y);
	}

/**a code that will increment by 0.5 i.e half
 *for putchar (\n) to be effective we must always place outside te } CURLY braces
 */

	int v;
	v = -5;
	
	while(v<=5)
	{
		printf("%d\t", v);
		v = v + 1;
	}
	putchar('\n');	
	return 0;
}
