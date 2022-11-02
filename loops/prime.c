#include <stdio.h>
#include <stdbool.h> 
#include <math.h> 

/** math.h - this header file cuz i had to use sqrt
 *
bool isPrime - we declare  bool instead of int ti return true or false
 *
 *for - i woule be thr square of the input which must be greater than 1, then i will decrement, such that if input is 25 then i would be 5 and would decrement as 5, 4, 3 ,2

 * if - the value of input with i has no remainder ut may be that the value has a square root and it is divisible by 5, 10, 2, then the remainder of such will be 0. note shouldnt make the mistake of if(i % input == 0) the remainder would not be accurate such that it will execute all as prime(,dont know y yet
 *
 * return if the remainder is 0 then its definitely not a prime and it wont execute
* stdbool -  using this header file because we want to use boolean variable(true or false)
 */

bool isPrime(int input)
{
	for(int i = sqrt(input); i > 1; i--)
	{
		if(input % i == 0)
		{
		return false;
		}
	}
	return true;
}

/**bool prime - we must be careful not to write bool isPrime = isPrime, as we cannot declare ybe same variable twice 
 *for here i is equal to input and not sqrt input so that we can print the not just the sqaures if rhe user input but all thr mumbers under it. assuming scanf value if 25, amd  if i = sqrt input then output will be 5432, but if i = input them output  be 25, 24, 23, .....2
 *if prime: no need to write a condition inside of if, cuz this is a boolean as it would either be true or false
 * printf - we print i not input cuz the result of i(sqrt input) is our focus and that is what i am decrementing
 */

int main()
{
	int input;
	printf(" enter a number: ");
	scanf("%d", &input);

	for(int i = input; i > 1; i--)
 	{
	bool prime = isPrime(i);
		if(prime)
		{
		printf("%d is prime\n", i);
		}
	}
return 0;
}

/** bool isPrime - when we have a reusable vairable we can export it as a function that is y i used isPrime and called it as int input
 */


