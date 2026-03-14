#include<stdio.h>
int main ()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[1];
    printf("%d", p[2]); // p[2] means *(p + 2)
}