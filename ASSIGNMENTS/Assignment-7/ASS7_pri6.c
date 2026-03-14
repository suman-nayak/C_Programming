#include<stdio.h>
int GCD(int, int);
int main ()
{
	int num1, num2, gcd;
	printf("Enter two number:");
	scanf("%d%d", &num1, &num2);
	gcd = GCD(num1, num2);
	printf("GCD is : %d", gcd);
}
int GCD(int dividend, int divisor)
{
	int rem;
	rem = dividend % divisor;
	if (rem == 0)
		return(divisor);
	return(GCD(divisor, rem));
}