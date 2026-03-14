#include<stdio.h>
int main ()
{
    int a[5];
    printf("Enter 4 numbers:\n");
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements are:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}