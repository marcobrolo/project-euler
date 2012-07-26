#include <stdio.h>

int reverseNumber(long int num);

int reverseNumber(long int num)
{
	long int reverseNum=0L;
	while(num>0)
	{
		//algorithm used to reverse a number without having to
		//turn anything into strings
		reverseNum *=10;
		reverseNum += num%10;
		num /= 10;
		//printf("%ld\n", reverseNum);
	}
	return reverseNum;

}
int main()
{
	long int num = 1234567890;
	reverseNumber(num);
	int i,j;
	long int highestPalinProduct = 0;
	for (i=1; i<=1000;i++)
	{
		for(j=1; j<=1000; j++)
		{
			int product = i*j;
			int reverseProduct = reverseNumber(product);
			if (product == reverseProduct &&
				reverseProduct > highestPalinProduct)
			{
				highestPalinProduct = reverseProduct;
			}
		}
	}
	printf("the highest reverse palindrome product is %ld\n", highestPalinProduct);

	return 0;
}
