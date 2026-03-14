#include<stdio.h>
int primetest(int);
int main ()
{
	int num, result;
	printf("enter any number:");
	scanf("%d", &num);
	result = primetest(num);
	if (result == 1)
	{
		printf("%d is prime number", num);
	}
	else
	{
		printf("%d is not a prime number", num);
	}
}
int primetest(int num)
{
	int i, count = 0;
	for(i = 2; i < num; i++)
	{
		if (num % i == 0)
			count++;
	}
	if (count == 0)
	return 1;
	else
		return 0;
}