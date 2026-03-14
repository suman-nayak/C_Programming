#include <stdio.h>
int linearSearch(int arr[], int n, int key);
int main() 
{
    int n, key, result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    result = linearSearch(arr, n, key);
    if(result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", result + 1);
    return 0;
}
int linearSearch(int arr[], int n, int key) 
{
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}
