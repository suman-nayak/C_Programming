// Program to check whether a number is even or odd using switch case
#include<stdio.h>
int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = num % 2 == 0;
    switch (num)
    {
        case 1:
            printf("The number is even\n");
            break;
        case 0:
            printf("The number is odd\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}