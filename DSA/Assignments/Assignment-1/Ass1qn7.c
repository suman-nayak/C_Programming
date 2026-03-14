// WAP to multiply two matrices using functions. check all nessesary conditions for matrix multiplication.
#include <stdio.h>
void multiplymatrices(int [][10], int [][10], int [][10], int, int, int, int);
int main()
{
    int i, j, row1, col1, row2, col2;
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d%d", &row1, &col1);
    int a1[10][10];

    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col1; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }

    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d%d", &row2, &col2);
    int a2[10][10];

    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < col2; j++)
        {
            scanf("%d", &a2[i][j]);
        }
    }

    if(col1 != row2)
    {
        printf("Matrix multiplication not possible due to incompatible dimensions.\n");
        return 0;
    }

    int result[10][10];
    multiplymatrices(a1, a2, result, row1, col1, row2, col2);

    printf("Resultant matrix after multiplication is:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void multiplymatrices(int a1[][10], int a2[][10], int result[][10], int row1, int col1, int row2, int col2)
{
    int i, j, k;
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for(k = 0; k < col1; k++)
            {
                result[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
}