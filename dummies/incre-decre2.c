#include <stdio.h>

/**b++ will make b 17, but a= b++ will not make a 17 but 16
 *the order of precedence for maths operators is from left to right
 *therefore to make the value of a 17 instead of post increament of a = b++ , we use a = ++b
 */

int main()
{
	int a, b;

	b= 16;
	printf(" a is unassigned %d", b);
	a = b++;
	printf("a is now assigned a=%d and b=%d", a, b);
	//a = ++b;
	//printf(" a is still assignef a=%d and b=%d", a, b);

	return 0;
}
