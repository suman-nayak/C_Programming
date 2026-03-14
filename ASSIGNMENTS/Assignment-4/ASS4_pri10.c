// Program to calculate income tax based on given slabs
#include<stdio.h>
int main ()
{
    float income, tax = 0;
    printf("Enter your income: ");
    scanf("%f", &income);
    if (income <= 150000)
     {
        tax = 0;
     }
     else if (income >= 150001 && income <= 300000)
    {
        tax = 0.10 * income;
    }
    else if (income >= 300001 && income <= 500000)
    {
        tax = 0.20 * income;
    }
    else
    {
        tax = 0.30 * income;
    }
    printf("Your tax is: %f\n", tax);
    return 0;
}