#include <stdio.h>
#include <stdlib.h>
/** this function exits() once its run
 *
 */

void sub(void);
int main(int argc, char* argv[])
{
	puts("quit now");
	sub();
	puts("cintd");

	return 0;

}

void sub(void)
{
	puts("cone");
	 exit(0);
}
