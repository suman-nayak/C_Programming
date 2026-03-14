#include<stdio.h>
int main ()
{
    int s[20][20], t[20][3];
    int r, c , i, j, k = 1, nz;

    printf("Enter the Row , Coulmn and Non-zero Value:\n");
    scanf("%d%d%d", &r, &c, &nz);

    s[0][0] = r;
    s[0][1] = c;
    s[0][2] = nz;

    printf("Enter the Triplet Value (Row,Coulmn and Value):\n");
    for(i = 0; i <= nz; i++){
        scanf("%d%d%d", &s[i][0], &s[i][1], &s[i][2]);
    }

    t[0][0] = r;
    t[0][1] = c;
    t[0][2] = nz;

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if(s[j][1] == 0){
                t[k][0] = s[j][1];
                t[k][1] = s[j][0];
                t[k][2] = s[j][2];
                k++;
            }
        }
    }
    printf("\n-=-=-=-The Triplet Transpose Representation-=-=-=-\n");
    printf("\nRows\tCoulmn\tValue\n");
    for(i = 0; i <= nz; i++)
    {
        printf("\n%d\t%d\t%d\n", t[i][0],t[i][1],t[i][2]);
    }
    return 0;
}