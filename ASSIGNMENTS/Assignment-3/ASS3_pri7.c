// Sum of individual digits of a three digit number
#include<stdio.h>
int main ()
{
	int num, sum, unit, ten, century;
	printf("Enter any three digit Number:");
	scanf("%d", &num);
	unit = num % 10;
	ten =( num / 10) % 10;
	century = num / 100;
	sum = unit + ten + century;
	printf("The sum of the individual digits any three digit is:%d", sum);
	return 0;
}
