// WAP to delete an element from a given position of an array.
#include <stdio.h>
int main()
{
    int i, n, loc;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter index to delete the element: ");
    scanf("%d", &loc);

    for(i = loc; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    printf("New array is:");
    for(i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}