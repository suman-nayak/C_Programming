//WAP to find GCD (Greatest Common Divisor) of two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, rem, divided, divisor;
    printf("Enter two numbers:");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
	    divided = num1;
	    divisor = num2;
    }
    else
    {
	    divided = num2;
	    divisor = num1;
    }
    while (divisor)
    {
	    rem = divided % divisor;
	    divided = divisor;
	    divisor = rem;
    }
    printf("\n GCD = %d", divided);
    return 0;
}