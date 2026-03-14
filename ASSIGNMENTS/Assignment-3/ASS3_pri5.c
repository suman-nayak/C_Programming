// Swapping of two numbers using third variable
#include<stdio.h>
#include<math.h>
int main ()
{
int var1, var2, temp;
	printf("enter two number:");
	scanf("%d%d", &var1, &var2);
	printf(" /n before swaping variable1 = %d and variable2 = %d", var1, var2);
	temp = var1;
	var1 = var2;
	var2 = temp;
	printf(" \n after swapping the variable1 = %d and variable2 = %d", var1, var2);
	return 0;
}

