#include<stdio.h>
int factorial(int);
int main ()
{
	int num, fact;
	printf("Enter any number:");
	scanf("%d", &num);
	fact = factorial(num);
	printf("the Factorial is: %d", fact);
}
int factorial(int num)
{
	if (num == 0 || num == 1)
		return 1;
	else
		return (num * factorial(num - 1));
}