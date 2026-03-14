// WAP to insert a new element at any desired location of a partially filled array.
#include <stdio.h>
int main()
{
    int i, n, item, loc;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d elements:", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter new element and index: ");
    scanf("%d%d", &item, &loc);

    for(i = n - 1; i >= loc; i--)
    {
        a[i + 1] = a[i];
    }

    a[loc] = item;

    printf("New array is:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}