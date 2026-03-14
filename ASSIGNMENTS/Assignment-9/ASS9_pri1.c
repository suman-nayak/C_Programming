  #include <stdio.h>
int main()
{
    int m, n, i, j;
    int a[10][10], b[10][10], sum[10][10];
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++)
         {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++)
         {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
