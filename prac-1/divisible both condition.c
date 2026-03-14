#include<stdio.h>
int main ()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 7 == 0)
    {
        printf("%d is divisible by 5 and 7", num);
    }
    else if (num % 7 == 0)
    {
        printf("%d is divisible by 7", num);
    }
    else if (num % 5 == 0 )
    {
        printf("%d is divisible by 5", num);
    }
    else {
        printf("%d is not divisible by 7 and 5", num);
    }
    return 0;
}num % 7 == 0