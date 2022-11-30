#include <stdio.h>

/**int *p the pointer p is pointing to the part of memory that holds 20. this cam allows us change the value of 20 or referemce it without using the intial variable(slice) that initialized it.
 *
 */

int main ()
{
	int slice = 20;
	int *p = &slice;

	printf("answer is %d\n", slice);
	printf("pointer amswer is %d\n", *p);

	slice = 21;

	printf("answer is %d\n", slice);
        printf("pointer amswer is %d\n", *p);

	*p = 25;

	printf("answer is %d\n", slice);
        printf("pointer amswer is %d\n", *p);

/** incrementing and decrementing pointers
 *if we were to increment slices we do slices++
 *but if we do *p++ for pointers it would be interpreted as *(p++) cuz ++ has higher precednece over * 
 *there yo increment a pointer appropraitly we do (*p)++ tovditect the interprete on what to compile first
 */

	(*p)++;

	printf("answer is %d\n", slice);
        printf("pointer amswer is %d\n", *p);



	return 0;
}
