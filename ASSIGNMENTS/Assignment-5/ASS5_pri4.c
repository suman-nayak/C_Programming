//WAP to find the factorial of a given number.
#include <stdio.h>
int main()
{
    int num, fact = 1, i;
    printf("Enter any number:");
    scanf("%d", &num);
    for (i= 1; i <= num; i++)
    {
    fact = fact * i;
    }
    printf("\n factorial = %d", fact);
    return 0;
}