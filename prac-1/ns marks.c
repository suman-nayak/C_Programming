#include<stdio.h>
int main ()
{
    int ns;
    printf("Enter the number of students: ");
    scanf("%d", &ns);
    int marks[ns];
    for(int i=0;i<ns;i++)
    {
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<ns;i++)
    {
        printf("Marks of student %d: %d\n",i+1,marks[i]);
    }
    return 0;
}