#include <stdio.h> 
#define SET 223
/** if the user input  is 255 so bor &AND SET 255 | 223
 * 11111111(255)
 * 11011111(223)
 * 11011111(223) answer                                                                   *                                                                                       *                                                                                       *                                                                                       */                                                                                                                                                                             char *binbin(int n);

int main()
{
        int bor, result;
        printf("enter a value between 0-255: ");
        scanf("%d", &bor);
        result = bor & SET;


        printf("%s\t%d\n", binbin(bor), bor);
        printf("%s\t%d\n",binbin(result), result);
        printf("%s\t%d\n", binbin(SET), SET);

        return 0;
}
// i dont fully understand yet but the the hexadecimal 0×80 i.e (1000000)  causes it to also display as binary. the length of array is bin[9] not 8(1000000) cuz of d null character 
// if
// when the binbin function is called
                                                                                        char *binbin(int n)                                                                     {                                                                                               static char bin[9];
                                                                                        
        int x;                                                                                  for(x=0; x<8; x++)                                                                      {
                bin[x] = n & 0x80 ? '1' : '0';
		n <<= 1;
	}
	return(bin);
}

