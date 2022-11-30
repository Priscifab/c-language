#include <stdio.h>

/**this is a multi dimensional array, i.e an array if arrays
 * in order for it to compile it requires that we indicate the size in [] while declaring
 *and if we cant to print we rows and columns from the left 0 i.e if i want to print 30 i will do grades[1(row)][2[(column)]
 *for 15 we do [0row][0coloum]
 *to print 10 [1row][0]
 *to print 35 [row 0][columm 2]
 */

int main()
{
	int grades [3][3] = {
	{15, 25, 35},
	{10, 20, 30}
	};

	printf("%d\n", grades[0][2]);

/**if we were to print out all the values instead of 1 at a fime ee can use loops
 *int my grades [rows][columns]
 * note that the prinf(\n) shouldnt be outside the for looo, as it wont av any effects
 */

	//int const row = 2;
	//int const colom = 3;

	int myGrades[2][3] = {
	{5, 10, 15},
	{20, 30, 40}
	};

	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
		printf("%d ", myGrades[i][j]);
		}
		printf("\n");
	}

	return 0;
}
