#include<stdio.h>
int main ()
{
    int num, p1, p2, sum;
    printf("enter a numbr:");
    scanf("%d", &num);
    p2 = num % 10;
    while (num >= 10)
    {
        num = num/10;
    }
    p1 = num;
    sum = p1 + p2;
    printf("sum is: %d", sum);
    return 0;
}