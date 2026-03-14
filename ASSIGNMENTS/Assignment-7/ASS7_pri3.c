#include<stdio.h>
int large(int, int, int);
int main ()
{
	int num1, num2, num3, largest;
	printf("Enter 3 number:");
	scanf("%d%d%d", &num1, &num2, &num3);
	largest = large(num1, num2, num3);
	printf("the largest is:%d", largest);
}
int large(int num1, int num2, int num3)
{
	return((num1>num2)? ((num1>num3)?num1 : num3) : ((num2>num3)?num2 : num3));
}