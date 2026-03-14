#include<stdio.h>
int main ()
{
    int a[] = {10, 20, 30};
    int *p = a;
    printf("%d", ++*p); // increments the value at the address p points to (which is a[0])
    return 0;
}