#include<stdio.h>
int main ()
{
    int num1, num2, temp;
    printf("Enter two number:");
    scanf("%d%d", &num1, &num2);
    printf("before swapping num1:%d \t num2:%d", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping num1 :%d \t num2:%d", num1, num2);
}