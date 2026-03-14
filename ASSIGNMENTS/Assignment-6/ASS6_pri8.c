#include<stdio.h>
int main ()
{
    int lower, upper, i, sum, rem, num;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &lower, &upper);
    for(i = lower; i <= upper; i++)
    {
        sum = 0;
        num = i;
        while(num != 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num /= 10;
        }
        if(i % sum == 0)
        {
            printf("%d ", i);
        }
    }
}