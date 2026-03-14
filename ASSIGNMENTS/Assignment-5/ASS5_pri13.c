//WAP to calculate the sum of the series 1/1! + 2/2! + 3/3! + ..... + n/n!
#include<stdio.h>
#include<math.h>
int main()
{
    int fact = 1, num, i;
    float sum = 0.0;
    printf("Enter number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
        sum = sum + (float)i / fact;
    }
    printf("Sum = %f\n", sum);
    return 0;
}