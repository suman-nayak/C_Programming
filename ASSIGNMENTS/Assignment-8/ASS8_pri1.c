//wap to 
#include<stdio.h>
int main ()
{
	int n, i, sum = 0, mean = 0;
	printf("enter a NUMBER:");
	scanf("%d", &n);
	int a[n];
	printf("\n Enter %d no of elements:", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	mean = sum / n;
       printf("\nmean is :%d", mean);
       return 0;
}
