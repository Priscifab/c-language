#include <stdio.h>
void half(void);
void twice(void);

/**global or universal variables are declared right after header filea, prototyoes and #define
 *any function in d program can access a global variable, it doesnt have to be passed
 *or retuned to rhat function
 */

int age;
float feet;

int main()
{

	printf("how old are u: ");
	scanf("%d", &age);
	printf("feet size: ");
	scanf("%f", &feet);

	printf("your original age is %d, and feet is %f\n", age, feet);

	twice();
	half();
	printf("fake is %d and feet is %f\n", age, feet);
	return 0;
}

void half(void)
{
	float a, h;
	a = (float)age/2.0;
	printf("half ur age is %f\n", a);
	h = feet/2.0;
	printf("half ur feet is %f\n", h);
}

void twice(void)
{
	age= age* 2; 
	//or age *= 2;
	printf("twice ur age is %d\n", age);
	feet *= 2;
	printf("twice ur feet is %f\n", feet);
}

