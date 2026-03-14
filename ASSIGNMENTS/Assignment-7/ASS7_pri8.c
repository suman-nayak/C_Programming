#include<stdio.h>
int sumofdigits(int);
int main ()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sumofdigits(num);
    printf("Sum of digits of %d is %d\n", num, result);
    return 0;
}

int sumofdigits(int n)
{
    if(n==0)
        return 0;
    else
        return (n % 10) + sumofdigits(n / 10);
}