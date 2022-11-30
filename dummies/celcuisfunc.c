#include <stdio.h>
float Faren(float celcius);
/** A function that converts Farenhite to Celcius
 * in the int main function i invoked or called the Faren function inside the printf as Faren(value)
 */

float Faren(float celcius)
{
	float convert;
	convert = (celcius - 32) / 1.8;

	return (convert);
}
// ot we can create the function with less variables sibce its simple
// float Faren(float celcius)
// {
// 	return = (celcius - 32) / 1.8;
// }

int main()
{
	 float value1;
	 printf("enter a farenheit value: ");
	 scanf("%f", & value1);

	 printf("celcius is %f\n", Faren(value1));
	return 0;
}
// we can also call d function Faren by creating a new variable
// int main()
// {
// float value1;
// float assign;
// printf("convert to farenheit: ");
// scanc("%f", &value);
//
// assign = Faren(value)
// printf("celcuis of %f is %f\n", value, assign)
