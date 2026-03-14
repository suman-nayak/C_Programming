#include <stdio.h>
void reMatrix(int triplet[100][3], int size) {
    int rows = triplet[0][0];
    int cols = triplet[0][1];
    int matrix[10][10] = {0};
    for (int i = 1; i < size; i++)
    {
        int r = triplet[i][0];
        int c = triplet[i][1];
        int val = triplet[i][2];
        matrix[r][c] = val;
    }
    printf("Reconstructed Sparse Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}
int main() 
{
    int triplet[100][3], size;
    printf("Enter number of triplet rows: ");
    scanf("%d", &size);
    printf("Enter triplet elements (row col value):\n");
    for (int i = 0; i < size; i++)
        scanf("%d%d%d", &triplet[i][0], &triplet[i][1], &triplet[i][2]);

    reMatrix(triplet, size);
    return 0;
}
