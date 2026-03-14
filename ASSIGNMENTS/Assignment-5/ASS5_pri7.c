//WAP to check whether a given number is prime or composite.
#include<stdio.h>
int main ()
{
	int num, i, count = 0;
	printf("Enter any no:");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			count++;
	}
	if (count == 2) 
	{
		printf("%d is prime number:", num);
	}
	else 
	{
		printf("%d is composite number", num);
	}
	return 0;
}