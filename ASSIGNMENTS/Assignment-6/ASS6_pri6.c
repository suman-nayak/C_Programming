#include<stdio.h>
int main ()
{
    int lower, upper, i, reverse, remainder;
    printf("Enter two integers (lower and upper) to define the range: ");
    scanf("%d %d", &lower, &upper);
    for(i = lower; i <= upper; i++)
    {
        reverse = 0;
        int num = i;
        while(num != 0)
        {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }
        if(i == reverse)
        {
            printf("%d is a palindrome number.\n", i);
        }
    }
    
}