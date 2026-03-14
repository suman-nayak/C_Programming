#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n, i;
    int min, max;

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

    min = max = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Smallest element = %d\n", min);
    printf("Largest element  = %d\n", max);

    free(arr);
    return 0;
}

