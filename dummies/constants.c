#include <stdio.h>
#define val "igolukumo priscila"
#define NEW 2*4
/** contants are used to avoid repetitions just like variables
 *but unlike variables they are used when they are not likely to be changed throughout d source code, we make costants of values or strings thay remains consisent 
 *and must appear at the top of the source code right after header files(directives or preprocessor)
 */

int main()
{
	printf(" this is our value %d\n", NEW);
	printf(" this is my permanent name %s\n", val);

	return 0;
}

