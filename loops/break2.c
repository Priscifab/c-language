#include <stdio.h>

/** main - would print ur guess is right if thr user inputs 25
 * else - would print the sorry ur guess is wrong 
 */
int main()
{
	int hidden = 25;
	int number;
	printf("guess the number: ");
	scanf("%d", &number);

	if(number == hidden)
	{
		printf("you guessed right!\n");
	}else 
		{
 		printf("%d sorry, your guess is wrong\n", number);
		}



/** we can make thr user guess easier by looping or iterating the value by one until the user gets it
 *we use break to stop it from looping once it gets to the numbe
r                                                                *this implies that we are trying to crack a number, until the user breaks out kf the loop and gains access
 *the disadvamtage of this is that if the user enters a value that is above the intilized 30 it would lead to an infinite loop amd wouldnt break cuz there is no break after the i++, and if we put a break after i++ wouldnt function accurately such that even if the user enters a lower it wouldnt increment 
 */

	int i;
        printf("try ur luck:");                                         scanf("%d", &i);
        int guess = 30;

        while(1)
        {
        printf("%d", i);
                if(i == guess)
                {
                printf("\nwe found it\n");
		break;
                }
		printf("\n");
		i++;
        }


/** the for looo has an adavantage over the while loop in this case such that if rhe user puts in a value higher than the initialized one it would break and not loop at all, but if the user luts in a value less than it would iterate or increment till it stops
 */

	int guess2 = 40;
	int u;
	printf("guess ");
	scanf("%d", &u);

	for(; u < guess2; u++)
	{
	printf("%d\n", u);
		if( u  == guess2)
		{
		printf("you got it");
		break;
		}
	}
	return 0;
}
