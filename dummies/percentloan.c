#include <stdio.h>

float percent(float num)
{
	float value;
	value = num * (0.8/100);
	return value;
}

int main()
{
	int x;
	float sum;
	float multiply;
	puts("enter value :");
	scanf("%d", &x);
	multiply= 14 * percent(x);
	sum = x + multiply;
//if i use 0.1f it would print .0 at the end of the answer
//but if i use 1.2f this ks a flag that would ensure that it lrints kn 2 decimal point if would print .00 i.w 2 digits at the end
	printf("Dear customer your loan of %d, has a interest rate of %.1f, after two weeks you are to pay %.2f\n", x, percent(x), multiply);
	return 0;
}
