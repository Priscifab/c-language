#include <stdio.h>

/**for this to work the user input must be greater than 0 max>0
 * this code will decrement by 2, max =-2
 *e.x if the user input is 10 it will display 10, 8, 6z 4, 2, 
 *i could have simply done for(int max; max>=9; max =3)
 *but this wont work as it would be difficult to use scanf
 *and if i declare max inside the forioop it wouldnt be recognized outside the loop 
 *that is we create the variable i to solve this
 */
int main()
{
	int max;
	printf(" Please entee loop value: ");
	scanf("%d", &max);
	for(int i = 0; max>= i; max -=2)
	{
		printf("%d\n", max);
	}
return 0;
}
