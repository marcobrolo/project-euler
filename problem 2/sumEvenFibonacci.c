#include <stdio.h>

int main()
{
	int term1=1;
	int term2=2;
	int next_term, sum=2;

	while (next_term < 4000000)
	{
		next_term = term1 + term2;
		if (next_term % 2 == 0)
		{
			sum += next_term;
		}
		term1 = term2;
		term2 = next_term;
	}
	printf("Sum of all even fib numbers under 4million is: %d\n", sum);
	return 0;
}
