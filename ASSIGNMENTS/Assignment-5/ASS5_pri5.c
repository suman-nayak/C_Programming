//WAP to find the largest number among 10 numbers entered by the user.
#include<stdio.h>
int main ()
{
	int num, i, largest = 0;
	for (i = 1; i<= 10; i++){
		printf("Enter any number:");
		scanf("%d", &num);
		largest = (largest > num)? largest : num;
	}
	printf(" \n Largest = %d", largest);
	return 0;
}