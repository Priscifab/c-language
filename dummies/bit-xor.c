#include <stdio.h> 
#define SET 170
/** if the user is 65 so bor ^ exclsive or SET 73 ^ 170
 * its the only differnce btw inclusive and exclusive or is that inclisive includes the two 1's
 * but exclusive exludes the two 1's 
 * 01001001(73)
 * 10101010(170)
 * 11100011(227) answer                                                                                *                                                                                                    *                                                                                                    *
 */

char *binbin(int n);  

int main()  
{ 
	int bor, result;                 
	printf("enter a value between 0-255: ");  
	scanf("%d", &bor);
	result = bor ^ SET;                                                                                                                                                                                                                                                                                            printf("%s\t%d\n", binbin(bor), bor);                                                                printf("%s\t%d\n",binbin(result), result);                                                           printf("%s\t%d\n", binbin(SET), SET);                                                                                                                                                                     return 0;
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
