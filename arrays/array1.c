#include <stdio.h>

/**Arrays are collection of data stored in one variable
 * the members or elements of an array should be of thr same data type
 *arrays are 0 based, i.e it starts counting from 0 not 1, as the first element of an array has the index 0(index is the number attatched to each element in an array
 * we declare and initialize in two ways
 * myGrade[0]= 15; or myGrade[] = {15, 10, 5,};
 */

int main()
{
        int myGrades [] = {10, 15, 30, 20, 25, 35, 50};
	int size = 7;

        printf("%d\n %d\n %d\n", myGrades[0],myGrades[1], myGrades[2]);

/** if we want to print all we can use a loop
 * note we should never do i <= size because if size of thr array is 5, since arrays are indexed 0 it would be 0,1,2,3,4,5 = size(6) therefore we rather do i < size such that 0,1,2,3,4 = size(5)
 * note that size is usually one ahead of the last index number
 * i.e from the variable myGrades 10 is index 0, 15 is index 1 ...... 50 is index 6 but on the other hand the size of all the members of the array is not 6 but 7, cuz it counts from 0
 */

	for(int i = 0; i < size; i++)
	{
	printf("%d\n", myGrades[i]);
	}
        return 0;
}
