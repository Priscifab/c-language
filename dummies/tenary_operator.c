#include <stdio.h>

/** this ? is called the tenary operator
 *it can be used instead of else if
 *but it is suitable for small sized staements
 * ? rep if while : rep else
 */
int main()
{
	int money;
	int cost = 30;
	printf("how much cam you afford: ");
	scanf("%i", &money);

	money >= cost ? printf("congrats uou can afford it\n") : printf("sorry you wil need %d dollara more to afford it\n", cost - money);

	return 0;
}
