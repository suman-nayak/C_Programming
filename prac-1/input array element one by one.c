#include<stdio.h>
int main ()
{
    int arr[6];
    printf("Enter 1st elements:");
    scanf("%d", &arr[0]);
    printf("Enter 2nd elements:");
    scanf("%d", &arr[1]);
    printf("Enter 3rd elements:");
    scanf("%d", &arr[2]);
    printf("Enter 4th elements:");
    scanf("%d", &arr[3]);
    printf("Enter 5th elements:");
    scanf("%d", &arr[4]);
    printf("Enter 6th elements:");
    scanf("%d", &arr[5]);

    printf("%d", arr[3]);
    return 0;
}