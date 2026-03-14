/*WAP to define a structure STUDENT having members as name, roll no, branch, and CGPA.
Enter the details of 5 students. Display the details of the student having the highest CGPA.*/
#include <stdio.h>
#include <string.h>
int main ()
{
    struct STUDENT {
    char name[50];
    int roll;
    char branch[30];
    float cgpa;
};
    struct STUDENT students[5];
    struct STUDENT top_student;
    top_student.  cgpa = -1.0;

    for(int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Branch: ");
        scanf("%s", students[i].branch);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);

        if(students[i].cgpa > top_student.cgpa) {
            top_student = students[i];
        }   
    }

    printf("\nDetails of the student with the highest CGPA:\n");
    printf("Name: %s\n", top_student.name);
    printf("Roll No: %d\n", top_student.roll);
    printf("Branch: %s\n", top_student.branch);
    printf("CGPA: %f\n", top_student.cgpa);

    return 0;   
}