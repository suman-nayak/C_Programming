// WAP to merge the element of two different 1-D arrays into a resultant array.
#include <stdio.h>
int main()
{
    int i, n1, n2;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    int a1[n1];

    printf("Enter %d elements for first array:", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int a2[n2];

    printf("Enter %d elements for second array:", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }

    int n3 = n1 + n2;
    int a3[n3];

    for(i = 0; i < n1; i++)
    {
        a3[i] = a1[i];
    }
    for(i = 0; i < n2; i++)
    {
        a3[n1 + i] = a2[i];
    }

    printf("Merged array is:");
    for(i = 0; i < n3; i++)
    {
        printf("%d ", a3[i]);
    }

    return 0;
}