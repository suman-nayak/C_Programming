//WAP to find out sum of elements of an array using function.
#include <stdio.h>
int sumofarray(int [], int);
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
    int sum = sumofarray(a, n);
    printf("Sum of elements is: %d", sum);
}
int sumofarray(int a[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
        sum += a[i];
    return sum;
}