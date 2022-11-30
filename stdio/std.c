#include <stdio.h>

int main(void)
{
	char l,m,n;
	int age;
	char name[13];

	printf("enter your initials and then enter your age:");
	scanf("%c%c%c%d%s", &l, &m, &n, &age, name);
	printf("your initials are%c%c%c\n.your age is %d\n you name is %s\n", l, m, n, age, name);
 	return 0;
}
