#include <stdio.h>
void transTriplet(int triplet[100][3], int size) {
    int trans[100][3];
    trans[0][0] = triplet[0][1];
    trans[0][1] = triplet[0][0];
    trans[0][2] = triplet[0][2];

    int k = 1;
    for (int i = 0; i < triplet[0][1]; i++) {
        for (int j = 1; j < size; j++) {
            if (triplet[j][1] == i) {
                trans[k][0] = triplet[j][1];
                trans[k][1] = triplet[j][0];
                trans[k][2] = triplet[j][2];
                k++;
            }
        }
    }

    printf("Transposed Triplet Matrix:\n");
    for (int i = 0; i < k; i++)
        printf("%d\t%d\t%d\n", trans[i][0], trans[i][1], trans[i][2]);
}
int main() {
    int triplet[100][3], size;
    printf("Enter number of triplet rows: ");
    scanf("%d", &size);
    printf("Enter triplet elements (row col value):\n");
    for (int i = 0; i < size; i++)
        scanf("%d %d %d", &triplet[i][0], &triplet[i][1], &triplet[i][2]);

    transTriplet(triplet, size);
    return 0;
}
