#include <stdio.h>
void multiplyMatrix(int r1, int c1, int A[][10], 
                    int r2, int c2, int B[][10], 
                    int result[][10]);

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2) {
        printf("Matrix multiplication NOT possible (c1 != r2).\n");
        return 0;
    }

    int A[10][10], B[10][10], result[10][10];

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    multiplyMatrix(r1, c1, A, r2, c2, B, result);

    printf("\nResultant Matrix (A × B):\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void multiplyMatrix(int r1, int c1, int A[][10], 
                    int r2, int c2, int B[][10], 
                    int result[][10]) {

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0; 
            for(int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
