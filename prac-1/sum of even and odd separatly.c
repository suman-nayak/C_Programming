#include<stdio.h>
int main ()
{
    int num, odd_sum = 0, even_sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    for(int i=1; i<= num; i++)
    {
        if (i % 2 == 0)
        even_sum = even_sum + i;
        else
        odd_sum = odd_sum + i;       
    }
    printf("the even sum is: %d \nthe odd sum is:%d", even_sum, odd_sum);
    return 0;
}