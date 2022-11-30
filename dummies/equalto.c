#include <stdio.h>
#define SECRET 17
/**
 *
 *
 */

int main()
{
	int guess;
	printf("guess the secret number: ");
	scanf("%d", &guess);

	if(guess == SECRET)
	{
		puts("you guessed right");
		return 0;
	}
	if(guess != SECRET)
	{
		puts("try again");
		return 1;
	}

}
