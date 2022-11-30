#include <stdio.h>
#define SIZE 6

/** void showarray(int arr[]) this function orototyoe should acceopt integer arrays
 *we do not call or invoke functions arrays with [] showarry(n[]¶); rather show(n)
 *except u want to specify a member in the array showarray(n[4]);
 */
void showarray(int arr[]);
void arrayinc(int arc[]);
int main()
{
	int n[] = {1, 2, 3, 4, 5, 7};
	puts("here is d array");
	showarray(n);

	puts("second arrray");
	arrayinc(n);

	return 0;
}

/**
 * the function doesnt return anything or value cuz its declared void
 */
void showarray(int arr[])
{
	int x;
	for(x=0; x<SIZE; x++)
	{
		printf("%d\t", arr[x]);
	}
	putchar('\n');
}

void arrayinc(int arc[])
{
	int x;
	for(x= 1; x<SIZE; x++)
	{
		printf("%d\t", arc[x]);
	}
	putchar('\n');
}

