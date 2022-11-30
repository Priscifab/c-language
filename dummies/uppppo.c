#include <stdio.h>                                                                      /** This code converts a capital letter to a small lettee                                *cuz on the ASCII table we add +32 to the number of d uppercase  to get the lowercase   *e.g A = 65 a =97, B = 66, b = 98 and Z = 90, z= 122                                    *so ch = input[x] | 32 if x is 66(b) then it would be calculated as binary 66 | 32      * 01000011(67) C                                                                        * 00100000(32)
 * 00100011(98) c                                                                        *                                                                                       *                                                                                       */

int main()
{                                                                                               char input[64];                                                                         int x = 0;                                                                              char ch;                                                                        
        printf("Enter a capital letter: ");  
	fgets(input, 63, stdin); 

	while(input[x] != '\n')          
	{        
		ch = input[x] & 223;                                                                     putchar(ch);                                                                            x++;
        }                                                                                       putchar('\n');                                                                                                                                                                  return 0;
}
