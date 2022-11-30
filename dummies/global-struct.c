#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
/**
 *
 */

struct bot
{
	int xpos;
	int ypos;
};
struct bot tail(struct bot b);
//this is a struct prototype
//bot is d name of the struct initial is the variable name of d struct
//b is the argument that will be repl⁹aced when d function is called

int main()
{
	struct bot robot[SIZE];// robot is the new variable to be used here in maib func
	//places srand here in main and not in s tail function so that it can loop
	srand((unsigned)time(NULL));
	int x; 
	for(x=0; x<SIZE; x++)
	{
		robot[x] = tail(robot[x]); 
//used robot to call the struct that was declares outside i.e initial robot has replaced rhe argument b in a struct function

		printf(" xbox %d, ybox %d\n", robot[x].xpos, robot[x].ypos);
	//robot[x].xpos replaced by b.xpos
	}
	return 0;
}

struct bot tail(struct bot b)
{
	int x, y;
	x = random();
	y = random();

	x %= 20;
	y %= 20;

	b.xpos = x;
	b.ypos = y;
	return b;
}





