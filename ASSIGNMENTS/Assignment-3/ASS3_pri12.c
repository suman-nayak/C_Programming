// Gross Salary Calculation
#include<stdio.h>
int main ()
{
	float basic_salary, Da, HRA, gross_salary;
	printf("Enter the Basic salary is :");
	scanf("%f", &basic_salary);
	Da = basic_salary * 45.0 / 100.0;
	HRA = basic_salary * 30.0 / 100.0;
	gross_salary = basic_salary + Da + HRA;
	printf("The Gross Salary is :%f", gross_salary);
	return 0;
}
