#include <stdio.h>
void addMatrix(int r, int c, int A[][10], int B[][10], int sum[][10]);
int main() 
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int A[10][10], B[10][10], sum[10][10];
    printf("Enter elements of Matrix A:");
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Matrix B:");
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }
    addMatrix(r, c, A, B, sum);

    printf("\nResultant Matrix (A + B):\n");
    for(int i = 0; i < r; i++)
     {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void addMatrix(int r, int c, int A[][10], int B[][10], int sum[][10]) 
{
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}
