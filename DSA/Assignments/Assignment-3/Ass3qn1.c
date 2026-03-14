//WAP to find out the Triplet representation of any inputted matrix using functions.
#include <stdio.h>
void crTriplet(int matrix[10][10], int rows, int cols) {
    int triplet[100][3], k = 1;
    triplet[0][0] = rows;
    triplet[0][1] = cols;
    triplet[0][2] = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = matrix[i][j];
                k++;
                triplet[0][2]++;
            }
        }
    }
 printf("Triplet Representation:\n");
 printf("Row\tCoulmn\tValue\n");
    for (int i = 0; i < k; i++)
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
}

int main() {
    int matrix[10][10], rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    crTriplet(matrix, rows, cols);
    return 0;
}