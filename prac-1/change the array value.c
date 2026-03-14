#include<stdio.h>
int main ()
{
    int arr[5] = {10, 20, 30, 40, 50};
    arr[2] = 100;
    printf("%d\n", arr[2]);
    return 0;
}