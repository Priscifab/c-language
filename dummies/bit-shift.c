#include <stdio.h>

/** if the user is 12 so bor << LEFT SHIft 12 ^ 1                          
 * 00001100(12)
 * after shift by 1
 * 00011000(24)
 *
 * 00001100(12)
 * after right shift
 * 00000110(6)
 *
 */

char *binbin(int n);

int main() 
{
	int bor, left, right;                                                                                     printf("enter a value between 0-255: ");
        scanf("%d", &bor);
        left = bor <<  1;
	right = bor >> 1;

	printf("%s\t%d\n",binbin(left), left);
	printf("%s\t%d\n",binbin(right), right);

	return 0;
}                                                                                                    // i dont fully understand yet but the 0×80 causes it to also display as binary

// when the binbin function is called

char *binbin(int n)
{
        static char bin[9];

        int x;
        for(x=0; x<8; x++)
        {
                bin[x] = n & 0x80 ? '1' : '0';
                n <<= 1;
        }
        bin[x] = '\0';
        return(bin);
}
