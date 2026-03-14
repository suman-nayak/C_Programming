#include <stdio.h>
int main()
{
    int arr[3] = {1,2,3};
    printf("%d", *arr + *(arr + 1)); // 1 + 2 = 3
}