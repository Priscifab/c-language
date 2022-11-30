#include <stdio.h>

/** This is a struct of structs
 *here two structs postion and location combined to form a new struct called merge
 */

int main ()
{
	typedef struct 
	{
	int x;
	int y;
	}position;

	typedef struct
	{
	int east;
	int west;
	}location;

	typedef struct
	{
	position postion2;
	location located;
	}megrge;
	
	return 0;
}
