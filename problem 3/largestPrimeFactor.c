#include <stdio.h>
#include <math.h>

int factorize(long long num);

int factorize(long long num)
{
	int divisor;
	long long val=num;
	long long primes=2LL;
	long long i = 0LL;
	long long max=0LL;
	if (num == 0LL || num == 1LL)
	{
		return;
	}
	FILE *file;
	file = fopen("out.txt","a+");
	
	for (i=1LL; primes <=val; i++)
	{
		//trivial if find a prime for our number, we divide it
		while(val%primes==0)
		{
			val /=  primes;
			printf("%lld", val);
			max = primes;

		}
		fprintf(file,"%lld\n",primes);
		//below is an algorithm that would go through all prime numbers
		//however, it also includes some numbers that are not prime ie
		//25, but this is faster than iterating through every number
		primes =2LL*i+1LL;
		
	}
	fclose(file);
	if (max ==0LL)
	{
		max = num;
	}
	printf("the largest prime number is: %lld\n", max);
}

int main()
{
	long long numToFactor =600851475143LL;
	factorize(numToFactor);
	return 0;
}
