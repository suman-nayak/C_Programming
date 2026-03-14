#include<stdio.h>
int main ()
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    printf("%d", *(p++)); // 10
    printf("%d", *p); // 20
}