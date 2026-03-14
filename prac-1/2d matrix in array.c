#include<stdio.h>
int main()
{
    int a[2][2], i, j;
    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i<2; i++)
    {
        for(j = 0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of the matrix are:\n");
    for(i = 0; i<2; i++)
    {
        for(j = 0; j<2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}