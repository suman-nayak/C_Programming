#include<stdio.h>
int main ()
{
    int a[10][10], triplet[50][3];
    int r, c, i, j, k = 1, nz = 0;

    printf("Enter the no.of Rows and Columns:");
    scanf("%d%d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0){
                nz++;
            }
        }
    }
    triplet[0][0] = r;
    triplet[0][1] = c;
    triplet[0][2] = nz;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] != 0)
            {
            triplet[k][0] = i;
            triplet[k][1] = j;
            triplet[k][2] = a[i][j];
            k++;
            }
        }
    }
    printf("-=-=-=-Triplet Form-=-=-=-");
    printf("\nRow\tCoulmn\tValue\n");
    for(i = 0; i <= nz; i++)
    {
        printf("\n%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }
    return 0;
}