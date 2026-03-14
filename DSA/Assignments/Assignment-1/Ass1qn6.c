//WAP to find out the transpose of an matrix using function.
#include <stdio.h>
void transposematrix(int [][10], int [][10], int, int);
int main()
{
    int i, j, row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &row, &col);
    int a[10][10], tp[10][10];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    transposematrix(a, tp, row, col);

    printf("Transposed matrix is:\n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", tp[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void transposematrix(int a[][10], int tp[][10], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            tp[j][i] = a[i][j];
        }
    }
}