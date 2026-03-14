#include <stdio.h>
struct Employee 
{
    char name[30];
    int empid;
    char department[20];
    int age;
    float salary;
};
int main() 
{
    struct Employee e[5];
    int i;
    printf("Enter details of 5 employees:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Employee %d: name empid dept age salary\n", i+1);
        scanf("%s %d %s %d %f", e[i].name, &e[i].empid, e[i].department, &e[i].age, &e[i].salary);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s, EmpID: %d, Dept: %s, Age: %d, Salary: %f\n", e[i].name, e[i].empid, e[i].department, e[i].age, e[i].salary);
    }
    return 0;
}

