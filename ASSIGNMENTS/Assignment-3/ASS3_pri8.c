// Simple Interest
#include<stdio.h>
int main ()
{
	float p, t, r, i;
	printf("Enter the p, t and r is:");
	scanf("%f%f%f", &p, &t, &r);
	i = p * t * r / 100;
	printf("The Simple Interst is:%f", i);
	return 0;
}
