//WAP to find the sum of all numbers between n and m (both inclusive) using for loop.
#include<stdio.h>
int main ()
{
        int i, sum = 0, m, n;
	printf("Enter the n and m");
	scanf("%d%d", &n, &m);
        for (i = n; i <= m; i++) 
	{
        	sum = sum +i;
	}
	printf("\t %d", sum);
        
	return 0;
}    