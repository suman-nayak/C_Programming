#include<stdio.h>
#include<math.h>
int power(int, int);
int main ()
{
	int x, n, pw;
	printf("Enter base and power:");
	scanf("%d%d", &x, &n);
	pw = power(x, n);
	printf("answer:%d", pw);
}
int power(int x, int n)
{
	return(pow(x,n));
}