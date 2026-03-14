#include<stdio.h>
int main ()
{
    int a = 1, b = 1;
    printf("%d", a++ && ++b);
    printf("\n%d %d", a, b);
    return 0;
}