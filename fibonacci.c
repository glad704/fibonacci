#include"/home/gladson/Desktop/Practice/program_practice/recursion/fibonacci/fibonacci.h"

int fibonacci(int prNo,int num)
{
	static int i = 1;
	int nxtNo;
	if(i==term)
	{
		return 0;
	}
	else
	{
		nxtNo = prNo + num;
		prNo = num;
		num = nxtNo;
		printf("%d ",nxtNo);
		i++;
		fibonacci(prNo,num);
	}
	return 0;
}
