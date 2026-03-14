#include<stdio.h>
int main ()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a + 2;
    printf("%d", p[-1]); // p[-1] means *(p - 1)
}