#include <stdio.h>

int main() {
    int first[10][10], second[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // Input matrix dimensions
    printf("Enter rows and columns for first matrix (max 10): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix (max 10): ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication compatibility
    if(c1 != r2) {
        printf("Matrix multiplication not possible! Columns of first must be equal to rows of second.\n");
        return 1;
    }

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    // Initialize result matrix to zero
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Print multiplication result
    printf("Product of the two matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
