//WAP to check whether a given number is an Armstrong number or not.
#include<stdio.h>
int main ()
{
    int num, num1, rem, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    num1 = num;
    while (num1!=0)
    {
        rem = num1 % 10;
        sum = sum + (rem * rem * rem);
        num1 = num1 / 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}