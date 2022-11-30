#include <stdio.h>
/** the typedef is powerful it converted stinky tk an int
 *such that we didnt even need to do int main rather stinky main
 *and there was no need to do int stinky a = 2
 */

typedef int stinky;

stinky main()
{

	stinky a = 3;
	printf("%d + %d = %d", a, a, a+a);

	return 0;
}

