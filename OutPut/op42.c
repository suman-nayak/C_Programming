#include <stdio.h>
int main() 
{
int arr[] = {10, 20, 30};
printf("%d", sizeof(arr)/sizeof(arr[0]));
}