#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int maxValue = 5;
	//srand(time(NULL));
	int randomNumber = rand() % maxValue;
	printf("%d\n", randomNumber);

	int input;
	printf("Guess a random number: ");
	scanf("%d", &input);

	if(input == randomNumber)
	{
		printf("you win\n");
	}else
	{
		printf("sorry you lost\n");
	}
}

