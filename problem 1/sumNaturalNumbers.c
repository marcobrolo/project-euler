#include <stdio.h>

int main()
{
	int number = 999;
	int sum;
	for (number; number>0; number--)
	{
		if (number % 3 ==0)
		{
			sum += number;	
		}
		else if (number % 5 ==0)
		{
			sum += number;
		}
	}
	printf ("the total sum is %d\n", sum);
}

