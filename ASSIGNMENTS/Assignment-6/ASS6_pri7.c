#include<stdio.h>
#include<math.h>
int main ()
{
    int count, i, num, rem, lower, upper, sum;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &lower, &upper);
    for(i = lower; i <= upper; i++)
    {
        count = 0;
        sum = 0;
        num = i;
        while(num != 0)
        {
            num = num / 10;
            count++;
        }
        num = i;
        while(num != 0)
        {
            rem = num % 10;
            sum = sum + pow(rem, count);
            num = num / 10;
        }
        if(sum == i)
        {
            printf("%d is an Armstrong number.\n", i);
        }
    }
    return 0;
}