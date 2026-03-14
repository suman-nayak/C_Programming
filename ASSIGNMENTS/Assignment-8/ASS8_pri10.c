#include <stdio.h>
int main() 
{
    int n, i, j;
    int hasDuplicate = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                hasDuplicate = 1; 
                break;
            }
        }
        if (hasDuplicate == 1) 
        {
            break;
        }
    }
    if (hasDuplicate == 1) 
    {
        printf("The array contains duplicate elements.\n");
    } else 
    {
        printf("The array does not contain any duplicate elements.\n");
    }
    return 0;
} 