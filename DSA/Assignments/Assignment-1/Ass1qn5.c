//WAP to find the largest element of an array using function.
#include <stdio.h>
int largestelement(int [], int);
int main()
{
    int i, n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int largest = largestelement(a, n);
    printf("Largest element is: %d", largest);
}
int largestelement(int a[], int n)
{
    int i, largest = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];
    }
    return largest;
}