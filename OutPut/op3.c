#include<stdio.h>
int main ()
{
    int a = 10 , b = 20;
    a= a + b - (b = a);
    printf("%d", a);
    return 0;
}