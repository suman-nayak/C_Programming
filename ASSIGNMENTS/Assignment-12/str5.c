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
    float sum = 0;
    printf("Enter details of 5 employees:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s %d %s %d %f", e[i].name, &e[i].empid, e[i].department, &e[i].age, &e[i].salary);
        sum += e[i].salary;
    }
    float avg = sum / 5;
    printf("Employees with salary above average (%f):\n", avg);
    for (i = 0; i < 5; i++)
    {
        if (e[i].salary > avg)
            printf("Name: %s, EmpID: %d, Dept: %s, Age: %d, Salary: %f\n", e[i].name, e[i].empid, e[i].department, e[i].age, e[i].salary);
    }
    return 0;
}

