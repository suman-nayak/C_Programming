#include<stdio.h>
int main()
{
	int i,j,r,c;
        int mat[10][10],transpose[10][10];
        printf("enter the rows and column of the matrix= ");
        scanf("%d%d",&r,&c);

        printf("\nenter the element of the matrix one = ");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        scanf("%d",&mat[i][j]);
                }
        }
        printf("\nmatrix = \n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                        printf("%d\t",mat[i][j]);
                printf("\n");
        }
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                      transpose[j][i]=mat[i][j];
                }
        }
         printf("\nthe transpose matrix =\n ");
        for(i=0;i<c;i++)
        {
                for(j=0;j<r;j++)
                        printf("%d\t",transpose[i][j]);
                printf("\n");
        }
 }