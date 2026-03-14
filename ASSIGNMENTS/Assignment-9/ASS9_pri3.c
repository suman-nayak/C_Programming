#include <stdio.h>
int main()
{
    int i, j, n, matrix[10][10], sum = 0;
    printf("Enter the order (size) of square matrix: ");
    scanf("%d", &n);
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) 
    {
        sum += matrix[i][i];
    }
    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}