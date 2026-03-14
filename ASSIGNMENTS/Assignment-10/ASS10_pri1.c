#include <stdio.h>
int findSum(int arr[], int n);
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = findSum(arr, n);
    printf("Sum of array elements = %d\n", result);
    return 0;
}
int findSum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
