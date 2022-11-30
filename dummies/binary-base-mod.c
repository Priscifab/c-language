#include <stdio.h>

#define VALUE 2
/** the reason for the double %% in the printf is so that
 *it would not be mistaken for an unknown conversion character
 *i just want it to display ex 10 % 5 = 0 i.e %d %% %d = %d
 *
 */

int name(int imp)
{
	int a;
	printf("Modulus %d\n", VALUE);

	for(a= imp/VALUE; a<=imp; a++)
	{
		int b = imp/VALUE;
		printf("%d %% %d = %d\n", a, VALUE, b%VALUE);
	}
	
	return 0;
}

int main()
{
	int user;
	printf("convert to base 2 here: ");
	scanf("%d", &user);

	printf("%d", name(user));

	return 0;
}

