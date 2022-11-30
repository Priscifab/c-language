#include <stdio.h>

/**getchar is designed to get just one charaacter or input
 *if it exceeds one it will only recognize and display 1 
 *it can accept a number, a letter a sign etc
 */

int main()
{
	
	int c;
        printf("i am wating for a value: \n");
        c = getchar();
        printf("your single character is %d\n", c);

//could use getchar to get multiple inputs with a do while conditiion

	char i;
	//i= getchar(); this must be inside the do, ourside the do it would run endless
	do {
		i = getchar();
		putchar(i);
	}while(i != '.');
	return 0;
}
