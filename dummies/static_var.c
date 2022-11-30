#include <stdio.h>
/** we do not always declare a variable staic except except we need their value retaine
 *everytime the function is called
 * values returned from a function eg return (a); should not be declared static 
 *cuz only d variables value is returnes not the variablw itself
 */

void poc(void);

int main()
{
	puts("first call");
	poc();
	putchar('\n');
	puts("second call");
	poc();


	return 0;
}

void poc(void)
{
	static int a;
//static ensures that a value ks retained btw functions
	printf("the value of%d\n", a);
	//when we place the printf be4 scanf it prints a random value
	printf("enter a value: ");
	scanf("%d", &a);

	//printf("%d\n", a);
}
