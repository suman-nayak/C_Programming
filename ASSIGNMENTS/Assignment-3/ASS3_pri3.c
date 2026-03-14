// Sum of N Natural Numbers with out using loop
#include<stdio.h>
#include<math.h>
int main ()
{
	int n, sum;
	printf("Enter the how many 1st natural number:");
	scanf("%d",&n);
	sum = n*(n + 1) / 2;
	printf("the sum of the 1st natural is:%d", sum);
	return 0;
}
