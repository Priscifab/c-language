#include <stdio.h>

/* alpha = alpha + 99; is the same as alpha += 99;
*but alpha =-10(assigns -10 to the variable alpha); is not the same as alpna -= 10;(this is the corect one it decreases the value of alpha by 10
*/

int main()
{

	float alpha;
	alpha = 501;
	printf("%.1f\n", alpha);
	alpha = alpha + 99;
	printf("%.1f\n", alpha);
        alpha= alpha - 250;
	printf("%.1f\n", alpha);
        alpha= alpha / 82;
	printf("%.1f\n", alpha);
        alpha= alpha * 4.3;
	printf("%.1f\n", alpha);

	return 0;
}
	
	
