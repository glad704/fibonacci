/**************************************************************************
 * FILE		: print_fibonacci_series_using_recursion().c
 * DESCRIPTION	: PRogram to print fibonacci series using recursion.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 17/07/2020
 * ***********************************************************************/

#include"/home/gladson/Desktop/Practice/program_practice/recursion/fibonacci/fibonacci.h"

int main()
{
	static int prNo=0,num=1;
	printf("\n\nRecursion : Print fibonacci series :\n");
	printf("----------------------------------------\n");
	printf("Input number of terms for the series (<20) : ");
	scanf("%d",&term);
	printf("The series are : \n");
	printf(" 1 ");
	fibonacci(prNo,num);
	printf("\n\n");
	return 0;
}
