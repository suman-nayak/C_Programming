// Program to find the largest of two numbers
#include<stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is the largest number.\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is the largest number.\n", num2);
    }
    else
    {
        printf("%d = %d, both numbers are equal.\n", num1, num2);
    }
    return 0;
}