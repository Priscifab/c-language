#include <stdio.h>

/** Structs is used for creating complex structure with numerousvariables. it allows us to encapsulate pieces of values inside one variable
 * example herr we can create a triangle with many rectangles inside
 *the . dot in .brradth and .length allows us to access the members of a struct.
 */

int main()
{

	struct rectangle
	{
	int length;
	int breadth;
	};

	struct rectangle myRectangle = {5, 10};
	printf(" the length is %d\n, the width is %d\n", myRectangle.length, myRectangle.breadth);

	/** to get rid of thr struct attacched to rectangle my Recatngle such that we can use that variable with other data type
	 *
	 */
	
	//typedef struct
	//{
	//int length;
	//int breadth
	//}rectangle;

	//rectangle myRectangle = {5, 10};

	return 0;
}
