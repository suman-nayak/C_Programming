// Find the largest of three numbers using conditional operator
#include<stdio.h>
int main ()
{
    int num1, num2, num3, large;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    large = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("The largest number is: %d\n", large);
    return 0;
}