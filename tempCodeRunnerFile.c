#include <stdio.h>
#include <unistd.h>

int main()
{
    int a[10][10], b[10][10], add[10][10], mul[10][10];
    int r1, c1, r2, c2, i, j, k;
    pid_t pid;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    pid = fork();

    if(pid == 0)
    {
        printf("\nAddition of matrices:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                add[i][j] = a[i][j] + b[i][j];
                printf("%d ", add[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMultiplication of matrices:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for(k = 0; k < c1; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}