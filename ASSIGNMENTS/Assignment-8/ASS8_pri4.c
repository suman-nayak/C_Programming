// WAP to insert a new element at any desired location of a partially filled array.
#include<stdio.h>
int main ()
{
	int i, n, item, loc;
	printf("Enter the array size:");
	scanf("%d", &n);
	int a[n];
	printf("\n Enter %d no.of elements", n-1);
	for(i = 0; i < n-1; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Enter new element and location:");
	scanf("%d%d", &item, &loc);
	for(i = n-1; i > loc; i--)
	{
		a[i] = a[i-1];
	}
	a[loc] = item;
	n = n+1;
	printf("New array is");
	for(i = 0; i < n; i++)
	{
		printf("%d \t", a[i]);
	}
	return 0;
}
