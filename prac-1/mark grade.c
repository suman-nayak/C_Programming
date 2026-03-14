#include<stdio.h>
int main ()
{
    float sub1, sub2, sub3, sub4, sub5, avg;
    printf("Enter the marks of 5 subject:");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
    avg = sub1 + sub2 + sub3 + sub4 + sub5 / 5;
    if (avg >= 90)
    {
        printf("E grade");
    }
    if (avg >= 80 &&  avg < 89)
    {
        printf("E grade");
    }
    if (avg >= 70 && avg < 79)
    {
        printf("A Grade");
    }
    if (avg >= 60 && avg < 69)
    {
        printf("B Grade");
    }
    if (avg >= 50 && avg <59)
    {
        printf("c Grade");
    }
    if (avg >= 40 && avg < 49)
    {
        printf("F grade");
    }
    if(avg < 40)
    {
        printf("f Grade");
    }
    return 0;
}