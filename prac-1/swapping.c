#include<stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter two number:");
    scanf("%d%d", &num1, &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("the two variable are:%d \t %d", num1, num2);
    return 0;
}