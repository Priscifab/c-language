#include <stdio.h>

/**in this code puts() doesnt require \n, it automatically arranges the statements on a new line it tackles the new line character unlike printf
 * put only read characters and strings, it must be in the format puts(char s);
 * put only accepts one argument, two or more arguments so no need for commas
 * like puts("char, qrg1, agr2"); this would bring an error
 * cuz it only accepts a string and it must be enclosed in " "
 */

int main()
{
	int p = 10;
	puts("i am happy");
	puts(" hally bithday");
	puts("nice t meet yiu");

	printf("H\b please check it\n ");
	printf("hipph\a");

	printf("the answer is %d\n", 986);
	printf("for float %2.1f\n", 9.86);
	printf("for float %f\n", 9.86);

	/** %d d result would be 0, 
	 *while %f would be 0.0000 althought the compiler should give a warning cuz u are dividing two integers2 and 5, but insead of using %d, u use %f
	 *the answer to it should be 0.4 so to get this value we ave tk typecast (float)2/5
	 */
	printf("for double %d\n", 2/5);
	printf("for float %f\n", 2/5);
	printf("we need to typecast %f\n", (float)2/5);

	return 0;
}

