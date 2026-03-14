#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *arr;
    int n, i, key;
    int found = 0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) 
    {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d is present in the array (position %d).\n", key, i + 1);
    else
        printf("%d is not present in the array.\n", key);

    free(arr);
    return 0;
}

