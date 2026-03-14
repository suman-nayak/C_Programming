// Average marks of 5 subjects of a student
#include<stdio.h>
int main ()
{
	float sub1, sub2, sub3, sub4, sub5, avg;
	printf("Enter the 5 subject marks:");
	scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
	avg = sub1 + sub2 + sub3 + sub4 + sub5 / 5.0;
	printf("the average marks in 5 subject of any student is:%f", avg);
       return 0;
}       
