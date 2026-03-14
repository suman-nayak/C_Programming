#include <stdio.h>
struct Student
{
    char name[30];
    int roll;
    char branch[20];
    float cgpa;
};
int main()
{
    struct Student s[5];
    int i, idx = 0;
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: name roll branch cgpa\n", i+1);
        scanf("%s %d %s %f", s[i].name, &s[i].roll, s[i].branch, &s[i].cgpa);
        if (s[i].cgpa > s[idx].cgpa) idx = i;
    }
    printf("Student with highest CGPA:\nName: %s, Roll: %d, Branch: %s, CGPA: %.2f\n", s[idx].name, s[idx].roll, s[idx].branch, s[idx].cgpa);
    return 0;
}

