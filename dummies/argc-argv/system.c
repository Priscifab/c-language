#include <stdio.h>
#include <stdlib.h>

/**the system() function directs d program i.e d operating sys  to run another program or issue a command
 *
 *
 */

int main()
{
	puts("press enter to clear the screen");
	getchar();
	//system("cls") for windows command line.
	system("clear");
	puts("rhats better");
	return 0;
}
