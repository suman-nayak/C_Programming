// Program to calculate average marks and assign grade using switch case
#include<stdio.h>
int main ()
{
    int sub1, sub2, sub3;
    float avg;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    avg = (sub1 + sub2 + sub3) / 3.0; 
    printf("Average marks: %f\n", avg);
    switch((int)(avg/10))
    {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        case 5:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F\n");
    }
}