//WAP to find out the Triplet representation of an inputted sparse matrix.
#include <stdio.h>
int main ()
{
    int row, col, i, j, count = 0;
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                count++;
            }
        }
    }
    int triplet[count][3];
    int k = 0;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = matrix[i][j]; 
                k++;
            }
        }
    }
    printf("Triplet representation of the sparse matrix:\n");
    printf("Row\tColumn\tValue\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }
    return 0; 
}