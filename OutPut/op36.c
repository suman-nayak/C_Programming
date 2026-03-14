#include<stdio.h>
int main ()
{
    int a = 2;
    a += a *= a += 3;
    printf("%d", a);
    return 0;
}