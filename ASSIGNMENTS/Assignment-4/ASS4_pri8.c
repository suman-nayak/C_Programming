// Program to calculate the grade based on average marks of three subjects
#include<stdio.h>
int main ()
{
    int sub1, sub2, sub3, avg;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    avg = (sub1 + sub2 + sub3) / 3;
    if (avg >= 90)
    {
        printf("Grade O\n");
    }
    if (avg >= 80 && avg < 90)
    {
        printf("Grade E\n");
    }
    if (avg >= 70 && avg < 80)
    {
        printf("Grade A\n");
    }
    if (avg >= 60 && avg < 70)
    {
        printf("Grade B\n");
    }
    if (avg >= 50 && avg < 60)
    {
        printf("Grade C\n");
    }
    if (avg >= 40 && avg < 50)
    {
        printf("Grade D\n");
    }
    if (avg < 40)
    {
        printf("Grade F\n");
    }
    return 0;
}