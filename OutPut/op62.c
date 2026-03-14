#include<stdio.h>
int main ()
{
    int arr[] = {5, 10, 15};
    int *p = arr;
    printf("%d", *p++ + *p);
    return 0;
}